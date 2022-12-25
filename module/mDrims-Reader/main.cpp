
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

// ��������
void CreateCSV_Major_CSE();           // ��������-��ǻ�Ͱ�������
void CreateCSV_Major_MME();           // ��������-��Ƽ�̵����а�



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

	// ��������
	cout << "\n- ��������\n";
	CreateCSV_Major_CSE();
	CreateCSV_Major_MME();


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
			for (auto& lectureTime : util::Split(fileLine[5], util::Contain, regex(R"([^,"]{1,})"))) {
				auto day = util::Split(lectureTime, util::Except, regex(R"(\d{1,}.\d{1,}-\d{1,}.\d{1,}/\d{1,}:\d{1,}-\d{1,}:\d{1,})"));
				auto time = util::Split(lectureTime, util::Contain, regex(R"(\d{1,})"));

				newLine.push_back(day[0]);
				newLine.push_back(to_string(stoi(time[4]) * 60 + stoi(time[5])));
				newLine.push_back(to_string(stoi(time[6]) * 60 + stoi(time[7])));
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



// ��������
void CreateCSV_Major_CSE() {   // ��������-��ǻ�Ͱ�������
	if (CSV_Format_Type1("./documents/origin/mdrims/����/��������/��ǻ�Ͱ�������.csv", "./documents/mdrims/����/��������/��ǻ�Ͱ�������.csv"))
		cout << "\"��ǻ�Ͱ�������.CSV\" Created Successfully!!!\n";
	else cout << "Failed to created \"��ǻ�Ͱ�������.CSV\"\n";
}

void CreateCSV_Major_MME() {  // ��������-��Ƽ�̵����а�
	if (CSV_Format_Type1("./documents/origin/mdrims/����/��������/��Ƽ�̵����а�.csv", "./documents/mdrims/����/��������/��Ƽ�̵����а�.csv"))
		cout << "\"��Ƽ�̵����а�.CSV\" Created Successfully!!!\n";
	else cout << "Failed to created \"��Ƽ�̵����а�.CSV\"\n";
}

