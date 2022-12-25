
#pragma once
#include "./C++Header_STL.h"
#include "./Utility.h"



class Course
{
public:
	struct CourseID {
		string base, div;
		string ToString() { return base + "-" + div; }
	};

	struct LectureTime {
		string day; int start, end;
		string ToString() {
			auto format = [&](string& s) { if (s.size() == 1) s.insert(s.begin(), '0'); return s; };
			return day + ", " + format(to_string(start / 60)) + ":" + format(to_string(start % 60)) + "~" + format(to_string(end / 60)) + ":" + format(to_string(end % 60));
		}
	};

	string curriculum;              // ��������
	CourseID id;                    // �м���ȣ
	string name;                    // �������
	int credit;                     // ����
	string professor;               // ��米��
	vector<LectureTime> times;      // ���ǽð�

	Course() {}
	Course(string _curriculum, CourseID _id, string _name, int _credit, string _professor) :curriculum(_curriculum), id(_id), name(_name), credit(_credit), professor(_professor), times(vector<LectureTime>()) {}

	bool operator<(const Course& other) const { return id.base == other.id.base ? id.div < other.id.div : id.base < other.id.base; }

	bool operator==(const Course& other) const { return id.base == other.id.base && id.div == other.id.div; }
};



class CourseManager
{
public:
	static bool IsEmptyBlock(string& block) { return block == "*"; }

	static bool IsSubString(string& text, string& pattern) {
		string t = "";
		string p = "";
		
		for (auto& e : text) t += toupper(e);
		for (auto& e : pattern) p += toupper(e);

		return t.find(p) != string::npos;
	}

	static vector<Course> Load_CourseList(string& path, tuple<string, string>& filter)
	{
		vector<Course> courseList;
		ifstream ifs("./documents/mdrims/" + path);
		//ofstream ofs("./log.txt");
	
		if (ifs.is_open())
		{
			string buffer;

			while (!ifs.eof())
			{
				getline(ifs, buffer);
				if (buffer.empty()) continue;
				//ofs << buffer << '\n';

				auto fileLine = util::Split(buffer, util::SplitType::Contain, regex(R"("[^"]{1,}"|[^,]{1,})"));
				auto newCourse = Course();

				// �������� �߰�
				newCourse.curriculum = fileLine[0];

				// �м���ȣ �߰� (�м���ȣ�� ���ڸ�, ���ڸ��� �и��Ͽ� �߰�)
				newCourse.id = { fileLine[1], fileLine[2] };

				// ������� �߰�
				newCourse.name = util::Split(fileLine[3], util::Contain, regex(R"([^"]{1,})"))[0];   // "a,b,c" ������ ��������� �����ϹǷ� ū����ǥ ���� ó�� �ʿ�

				// ���� �߰�
				if (IsEmptyBlock(fileLine[4])) 	newCourse.credit = 0;
				else newCourse.credit = stoi(fileLine[4]);

				// ������ �߰�
				if (IsEmptyBlock(fileLine[5])) newCourse.professor = "";
				else newCourse.professor = fileLine[5];

				// ���� �ð� �߰� List<����, ���� �ð�, ���� �ð�>
				if (IsEmptyBlock(fileLine[6])) newCourse.times = vector<Course::LectureTime>();
				else {
					newCourse.times = vector<Course::LectureTime>();
					for (int i = 6; i < fileLine.size(); i += 3)
						newCourse.times.push_back({ fileLine[i], stoi(fileLine[i + 1]), stoi(fileLine[i + 2]) });
				}

				// filter üũ
				bool pass = true;
				auto& [courseName, professor] = filter;

				if (!courseName.empty() && !IsSubString(newCourse.name, courseName))pass = false;
				if (!professor.empty() && !IsSubString(newCourse.professor, professor))pass = false;

				//if (!courseName.empty() && newCourse.name.find(courseName) == string::npos) pass = false;
				//if (!professor.empty() && newCourse.professor.find(professor) == string::npos) pass = false;

				// ������ ���� �߰�
				if (pass) courseList.push_back(newCourse);

			}
			ifs.close();
		}

		return courseList;
	}
};