
#include "./core/C++Header.h"
#include "./core/FileManager.h"



// ����� ����
bool IsEmptyBlock(string& block);
bool CSV_Format_Type1(string inputPath, string outputPath);   // CSV ���� ���� type1

// �Ϲݰ���
void CreateCSV_CommonLiberalArts();       // ���뱳��
void CreateCSV_CoreLiberalArts();         // �ٽɱ���
void CreateCSV_AcademicBasics();          // �й�����
void CreateCSV_GeneralLiberalArts();      // �Ϲݱ���
void CreateCSV_UniversityMajorBasics();   // ������������
void CreateCSV_TeachingProfession();      // ����
void CreateCSV_MilitaryScience();         // ������
void CreateCSV_LifelongEducation();       // �������
void CreateCSV_FreeChoice();              // ��������
void CreateCSV_NanoDegree();              // �����׸�

// AI���մ���
void CreateCSV_Major_ASW();           // AI���մ���-AI����Ʈ���������к�
void CreateCSV_Major_CSE();           // AI���մ���-��ǻ�Ͱ�������
void CreateCSV_Major_MME();           // AI���մ���-��Ƽ�̵�����Ʈ�����������
void CreateCSV_Major_AIC();           // AI���մ���-�ΰ���������
void CreateCSV_Major_AID();           // AI���մ���-�����ͻ��̾�����
void CreateCSV_Major_AIE();           // AI���մ���-�������θ�Ʈ��ũ���������
void CreateCSV_Major_AIB();           // AI���մ���-AI���մ�


int main()
{
	// �Ϲ� ����
	cout << "\n- �Ϲݰ���\n";
	CreateCSV_CommonLiberalArts();
	CreateCSV_CoreLiberalArts();
	CreateCSV_AcademicBasics();
	CreateCSV_GeneralLiberalArts();
	CreateCSV_UniversityMajorBasics();
	CreateCSV_TeachingProfession();
	CreateCSV_MilitaryScience();
	CreateCSV_LifelongEducation();
	CreateCSV_FreeChoice();
	CreateCSV_NanoDegree();

	// AI���մ���
	cout << "\n- AI���մ���\n";
	CreateCSV_Major_ASW();
	CreateCSV_Major_CSE();
	CreateCSV_Major_MME();
	CreateCSV_Major_AIC();
	CreateCSV_Major_AID();
	CreateCSV_Major_AIE();
	CreateCSV_Major_AIB();


	cout << "\n\nfinish...\n\n";

	system("pause");
	return 0;
}



// ����� ����
bool IsEmptyBlock(string& block) { return block == "*"; }

bool CSV_Format_Type1(string inputPath, string outputPath)   // CSV ���� ���� type1
{
	auto fileData = FileManager::Read_CSV(inputPath, util::SplitType::Contain, regex(R"("[^"]{1,}"|[^,]{1,})"));
	auto newFileData = vector<vector<string>>((int)fileData.size(), vector<string>());

	for (int i = 0; i < (int)fileData.size(); i++)
	{
		auto& fileLine = fileData[i];
		auto& newLine = newFileData[i];

		// �������� �߰�
		newLine.push_back(fileLine[0]);

		// �м���ȣ �߰� (�м���ȣ�� ���ڸ�, ���ڸ��� �и��Ͽ� �߰�)
		for (auto& courseID : util::Split(fileLine[1], util::SplitType::Except, regex(R"(-)")))
			newLine.push_back(courseID);

		// ������� �߰�
		newLine.push_back(fileLine[2]);

		// ���� �߰�
		newLine.push_back(fileLine[3]);

		// ������ �߰�
		newLine.push_back(fileLine[4]);

		// ���� �ð� �߰� List<����, ���� �ð�, ���� �ð�>
		if (IsEmptyBlock(fileLine[5])) newLine.push_back(fileLine[5]);
		else {
			auto prevLecture = tuple(string(), string(), string());

			for (auto& lectureTime : util::Split(fileLine[5], util::Contain, regex(R"([^,"]{1,})"))) {
				auto day = util::Split(lectureTime, util::Except, regex(R"(\d{1,}.\d{1,}-\d{1,}.\d{1,}/\d{1,}:\d{1,}-\d{1,}:\d{1,})"));
				auto time = util::Split(lectureTime, util::Contain, regex(R"(\d{1,})"));
				auto currLecture = tuple(day[0], to_string(stoi(time[4]) * 60 + stoi(time[5])), to_string(stoi(time[6]) * 60 + stoi(time[7])));

				// ���� ���Ǹ� ��ħ
				if (get<0>(prevLecture) == get<0>(currLecture) && get<2>(prevLecture) == get<1>(currLecture)) {
					(* (--newLine.end())) = get<2>(currLecture);
				}
				else {
					newLine.push_back(get<0>(currLecture));
					newLine.push_back(get<1>(currLecture));
					newLine.push_back(get<2>(currLecture));
				}

				prevLecture = currLecture;
			}
		}
	}

	return FileManager::Write_CSV(outputPath, newFileData);
}



// �Ϲݰ���
void CreateCSV_CommonLiberalArts() {   // ���뱳��
	if (CSV_Format_Type1("./documents/origin/mdrims/���뱳��/���뱳��.csv", "./documents/mdrims/���뱳��/���뱳��.csv"))
		cout << "\"���뱳��.CSV\" Created Successfully!!!\n";
	else cout << "Failed to created \"���뱳��.CSV\"\n";
}

void CreateCSV_CoreLiberalArts() {   // �ٽɱ���
	if (CSV_Format_Type1("./documents/origin/mdrims/�ٽɱ���/�ٽɱ���.csv", "./documents/mdrims/�ٽɱ���/�ٽɱ���.csv"))
		cout << "\"�ٽɱ���.CSV\" Created Successfully!!!\n";
	else cout << "Failed to created \"�ٽɱ���.CSV\"\n";
}

void CreateCSV_AcademicBasics() {   // �й�����
	if (CSV_Format_Type1("./documents/origin/mdrims/�й�����/�й�����.csv", "./documents/mdrims/�й�����/�й�����.csv"))
		cout << "\"�й�����.CSV\" Created Successfully!!!\n";
	else cout << "Failed to created \"�й�����.CSV\"\n";
}

void CreateCSV_GeneralLiberalArts() {  // �Ϲݱ���
	if (CSV_Format_Type1("./documents/origin/mdrims/�Ϲݱ���/�Ϲݱ���.csv", "./documents/mdrims/�Ϲݱ���/�Ϲݱ���.csv"))
		cout << "\"�Ϲݱ���.CSV\" Created Successfully!!!\n";
	else cout << "Failed to created \"�Ϲݱ���.CSV\"\n";
}

void CreateCSV_UniversityMajorBasics() {  // ������������
	if (CSV_Format_Type1("./documents/origin/mdrims/������������/������������.csv", "./documents/mdrims/������������/������������.csv"))
		cout << "\"������������.CSV\" Created Successfully!!!\n";
	else cout << "Failed to created \"������������.CSV\"\n";
}

void CreateCSV_TeachingProfession() {  // ����
	if (CSV_Format_Type1("./documents/origin/mdrims/����/����.csv", "./documents/mdrims/����/����.csv"))
		cout << "\"����.CSV\" Created Successfully!!!\n";
	else cout << "Failed to created \"����.CSV\"\n";
}

void CreateCSV_MilitaryScience() {  // ������
	if (CSV_Format_Type1("./documents/origin/mdrims/������/������.csv", "./documents/mdrims/������/������.csv"))
		cout << "\"������.CSV\" Created Successfully!!!\n";
	else cout << "Failed to created \"������.CSV\"\n";
}

void CreateCSV_LifelongEducation() {  // �������
	if (CSV_Format_Type1("./documents/origin/mdrims/�������/�������.csv", "./documents/mdrims/�������/�������.csv"))
		cout << "\"�������.CSV\" Created Successfully!!!\n";
	else cout << "Failed to created \"�������.CSV\"\n";
}

void CreateCSV_FreeChoice() {  // ��������
	if (CSV_Format_Type1("./documents/origin/mdrims/��������/��������.csv", "./documents/mdrims/��������/��������.csv"))
		cout << "\"��������.CSV\" Created Successfully!!!\n";
	else cout << "Failed to created \"��������.CSV\"\n";
}

void CreateCSV_NanoDegree() {  // �����׸�
	if (CSV_Format_Type1("./documents/origin/mdrims/�����׸�/�����׸�.csv", "./documents/mdrims/�����׸�/�����׸�.csv"))
		cout << "\"�����׸�.CSV\" Created Successfully!!!\n";
	else cout << "Failed to created \"�����׸�.CSV\"\n";
}



// AI���մ���
void CreateCSV_Major_ASW() {   // AI���մ���-AI����Ʈ���������к�
	if (CSV_Format_Type1("./documents/origin/mdrims/����/AI���մ���/AI����Ʈ���������к�.csv", "./documents/mdrims/����/AI���մ���/AI����Ʈ���������к�.csv"))
		cout << "\"AI����Ʈ���������к�.CSV\" Created Successfully!!!\n";
	else cout << "Failed to created \"AI����Ʈ���������к�.CSV\"\n";
}

void CreateCSV_Major_CSE() {   // AI���մ���-��ǻ�Ͱ�������
	if (CSV_Format_Type1("./documents/origin/mdrims/����/AI���մ���/��ǻ�Ͱ�������.csv", "./documents/mdrims/����/AI���մ���/��ǻ�Ͱ�������.csv"))
		cout << "\"��ǻ�Ͱ�������.CSV\" Created Successfully!!!\n";
	else cout << "Failed to created \"��ǻ�Ͱ�������.CSV\"\n";
}

void CreateCSV_Major_MME() {  // AI���մ���-��Ƽ�̵�����Ʈ�����������
	if (CSV_Format_Type1("./documents/origin/mdrims/����/AI���մ���/��Ƽ�̵�����Ʈ�����������.csv", "./documents/mdrims/����/AI���մ���/��Ƽ�̵�����Ʈ�����������.csv"))
		cout << "\"��Ƽ�̵�����Ʈ�����������.CSV\" Created Successfully!!!\n";
	else cout << "Failed to created \"��Ƽ�̵�����Ʈ�����������.CSV\"\n";
}

void CreateCSV_Major_AIC() {   // AI���մ���-�ΰ���������
	if (CSV_Format_Type1("./documents/origin/mdrims/����/AI���մ���/�ΰ���������.csv", "./documents/mdrims/����/AI���մ���/�ΰ���������.csv"))
		cout << "\"�ΰ���������.CSV\" Created Successfully!!!\n";
	else cout << "Failed to created \"�ΰ���������.CSV\"\n";
}

void CreateCSV_Major_AID() {   // AI���մ���-�����ͻ��̾�����
	if (CSV_Format_Type1("./documents/origin/mdrims/����/AI���մ���/�����ͻ��̾�����.csv", "./documents/mdrims/����/AI���մ���/�����ͻ��̾�����.csv"))
		cout << "\"�����ͻ��̾�����.CSV\" Created Successfully!!!\n";
	else cout << "Failed to created \"�����ͻ��̾�����.CSV\"\n";
}

void CreateCSV_Major_AIE() {   // AI���մ���-�������θ�Ʈ��ũ���������
	if (CSV_Format_Type1("./documents/origin/mdrims/����/AI���մ���/�������θ�Ʈ��ũ���������.csv", "./documents/mdrims/����/AI���մ���/�������θ�Ʈ��ũ���������.csv"))
		cout << "\"�������θ�Ʈ��ũ���������.CSV\" Created Successfully!!!\n";
	else cout << "Failed to created \"�������θ�Ʈ��ũ���������.CSV\"\n";
}

void CreateCSV_Major_AIB() {   // AI���մ���-AI���մ�
	if (CSV_Format_Type1("./documents/origin/mdrims/����/AI���մ���/AI���մ�.csv", "./documents/mdrims/����/AI���մ���/AI���մ�.csv"))
		cout << "\"AI���մ�.CSV\" Created Successfully!!!\n";
	else cout << "Failed to created \"AI���մ�.CSV\"\n";
}