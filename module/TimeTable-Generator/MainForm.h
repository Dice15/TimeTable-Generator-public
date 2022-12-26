
#pragma once
#include "./core/C++Header_STL.h"
#include "./core/Course.h"
#include "./generator//ui/TimeTabForm.h"



namespace TimeTableGenerator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;


	/// <summary>
	/// ���� Form: ������ ���� ����Ʈ���� ���ϴ� ������ �����ϰ� ��ȣ���� �ο�
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void) {
			mProcessCheck_Initializing = true;
			InitializeComponent();
			InitialzerMembers();
			mProcessCheck_Initializing = false;
		}

	protected:
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ btCallGenerator;
	private: System::Windows::Forms::DataGridView^ gvCourseList;
	private: System::Windows::Forms::DataGridView^ gvSelectCourse;
	private: System::Windows::Forms::ComboBox^ cbTargetCredit;
	private: System::Windows::Forms::Label^ lbTargetCredit;
	private: System::Windows::Forms::Label^ lbIdxSelect;
	private: System::Windows::Forms::TextBox^ tbIdxSelect;
	private: System::Windows::Forms::Button^ btIdxSelect;
	private: System::Windows::Forms::Label^ lbRestDay;
	private: System::Windows::Forms::CheckBox^ cbRestDay0;
	private: System::Windows::Forms::CheckBox^ cbRestDay1;
	private: System::Windows::Forms::CheckBox^ cbRestDay2;
	private: System::Windows::Forms::CheckBox^ cbRestDay3;
	private: System::Windows::Forms::CheckBox^ cbRestDay4;
	private: System::Windows::Forms::CheckBox^ cbSetRangeCredit;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SelectList_Column0;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SelectList_Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SelectList_Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SelectList_Column3;
	private: System::Windows::Forms::CheckBox^ cbRestDay5;
	private: System::Windows::Forms::Label^ lbRestTime;
	private: System::Windows::Forms::ComboBox^ cbRestTimeDay;
	private: System::Windows::Forms::ComboBox^ cbRestTimeStart;
	private: System::Windows::Forms::ComboBox^ cbRestTimeEnd;
	private: System::Windows::Forms::Button^ btRestTimeAdd;
	private: System::Windows::Forms::Label^ lbRestTimeStoE;
	private: System::Windows::Forms::DataGridView^ gvRestTimeList;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::Label^ lbCurriculum;
	private: System::Windows::Forms::ComboBox^ cbCurriculum;
	private: System::Windows::Forms::ComboBox^ cbUniversity;
	private: System::Windows::Forms::Label^ lbUniversity;
	private: System::Windows::Forms::Label^ lbMajor;
	private: System::Windows::Forms::ComboBox^ cbMajor;
	private: System::Windows::Forms::Button^ btSearch;
	private: System::Windows::Forms::Label^ lbCourseName;
	private: System::Windows::Forms::TextBox^ tbCourseName;
	private: System::Windows::Forms::GroupBox^ gbSearchCourse;
	private: System::Windows::Forms::Button^ btRefresh;
	private: System::Windows::Forms::TextBox^ tbProfessor;
	private: System::Windows::Forms::Label^ lbProfessor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column0;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::TextBox^ tbCourseID;
	private: System::Windows::Forms::Label^ lbCourseID;
	private: System::Windows::Forms::Button^ btMessageLoadCourseList;

	private:
		/// <summary>
		/// �ʼ� �����̳� ����
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����̳� ������ �ʿ��� �޼���
		/// </summary>
		void InitializeComponent(void)
		{
			this->btCallGenerator = (gcnew System::Windows::Forms::Button());
			this->gvCourseList = (gcnew System::Windows::Forms::DataGridView());
			this->Column0 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->gvSelectCourse = (gcnew System::Windows::Forms::DataGridView());
			this->SelectList_Column0 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SelectList_Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SelectList_Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SelectList_Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cbTargetCredit = (gcnew System::Windows::Forms::ComboBox());
			this->lbTargetCredit = (gcnew System::Windows::Forms::Label());
			this->lbIdxSelect = (gcnew System::Windows::Forms::Label());
			this->tbIdxSelect = (gcnew System::Windows::Forms::TextBox());
			this->btIdxSelect = (gcnew System::Windows::Forms::Button());
			this->lbRestDay = (gcnew System::Windows::Forms::Label());
			this->cbRestDay0 = (gcnew System::Windows::Forms::CheckBox());
			this->cbRestDay1 = (gcnew System::Windows::Forms::CheckBox());
			this->cbRestDay2 = (gcnew System::Windows::Forms::CheckBox());
			this->cbRestDay3 = (gcnew System::Windows::Forms::CheckBox());
			this->cbRestDay4 = (gcnew System::Windows::Forms::CheckBox());
			this->cbSetRangeCredit = (gcnew System::Windows::Forms::CheckBox());
			this->cbRestDay5 = (gcnew System::Windows::Forms::CheckBox());
			this->lbRestTime = (gcnew System::Windows::Forms::Label());
			this->cbRestTimeDay = (gcnew System::Windows::Forms::ComboBox());
			this->cbRestTimeStart = (gcnew System::Windows::Forms::ComboBox());
			this->cbRestTimeEnd = (gcnew System::Windows::Forms::ComboBox());
			this->btRestTimeAdd = (gcnew System::Windows::Forms::Button());
			this->lbRestTimeStoE = (gcnew System::Windows::Forms::Label());
			this->gvRestTimeList = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lbCurriculum = (gcnew System::Windows::Forms::Label());
			this->cbCurriculum = (gcnew System::Windows::Forms::ComboBox());
			this->cbUniversity = (gcnew System::Windows::Forms::ComboBox());
			this->lbUniversity = (gcnew System::Windows::Forms::Label());
			this->lbMajor = (gcnew System::Windows::Forms::Label());
			this->cbMajor = (gcnew System::Windows::Forms::ComboBox());
			this->btSearch = (gcnew System::Windows::Forms::Button());
			this->lbCourseName = (gcnew System::Windows::Forms::Label());
			this->tbCourseName = (gcnew System::Windows::Forms::TextBox());
			this->gbSearchCourse = (gcnew System::Windows::Forms::GroupBox());
			this->tbCourseID = (gcnew System::Windows::Forms::TextBox());
			this->lbCourseID = (gcnew System::Windows::Forms::Label());
			this->btRefresh = (gcnew System::Windows::Forms::Button());
			this->tbProfessor = (gcnew System::Windows::Forms::TextBox());
			this->lbProfessor = (gcnew System::Windows::Forms::Label());
			this->btMessageLoadCourseList = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gvCourseList))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gvSelectCourse))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gvRestTimeList))->BeginInit();
			this->gbSearchCourse->SuspendLayout();
			this->SuspendLayout();
			// 
			// btCallGenerator
			// 
			this->btCallGenerator->Font = (gcnew System::Drawing::Font(L"����", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->btCallGenerator->Location = System::Drawing::Point(920, 12);
			this->btCallGenerator->Name = L"btCallGenerator";
			this->btCallGenerator->Size = System::Drawing::Size(453, 51);
			this->btCallGenerator->TabIndex = 70;
			this->btCallGenerator->Text = L"�ð�ǥ ����";
			this->btCallGenerator->UseVisualStyleBackColor = true;
			this->btCallGenerator->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::btCallGenerator_MouseClick);
			// 
			// gvCourseList
			// 
			this->gvCourseList->AllowUserToAddRows = false;
			this->gvCourseList->AllowUserToDeleteRows = false;
			this->gvCourseList->AllowUserToResizeRows = false;
			this->gvCourseList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->gvCourseList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Column0,
					this->Column1, this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8
			});
			this->gvCourseList->Location = System::Drawing::Point(10, 145);
			this->gvCourseList->MultiSelect = false;
			this->gvCourseList->Name = L"gvCourseList";
			this->gvCourseList->ReadOnly = true;
			this->gvCourseList->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->gvCourseList->RowTemplate->Height = 23;
			this->gvCourseList->Size = System::Drawing::Size(895, 744);
			this->gvCourseList->TabIndex = 1;
			this->gvCourseList->RowHeaderMouseDoubleClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &MainForm::gridView_courseList_RowHeaderMouseDoubleClick);
			this->gvCourseList->RowsAdded += gcnew System::Windows::Forms::DataGridViewRowsAddedEventHandler(this, &MainForm::gvCourseList_RowsAdded);
			this->gvCourseList->RowsRemoved += gcnew System::Windows::Forms::DataGridViewRowsRemovedEventHandler(this, &MainForm::gvCourseList_RowsRemoved);
			// 
			// Column0
			// 
			this->Column0->HeaderText = L"Idx";
			this->Column0->Name = L"Column0";
			this->Column0->ReadOnly = true;
			this->Column0->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column0->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column0->Width = 35;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"��������";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"�м���ȣ";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"�������";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column3->Width = 117;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"����";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"��米��";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"���ǽð�1";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"���ǽð�2";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"���ǽð�3";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			this->Column8->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// gvSelectCourse
			// 
			this->gvSelectCourse->AllowUserToAddRows = false;
			this->gvSelectCourse->AllowUserToDeleteRows = false;
			this->gvSelectCourse->AllowUserToResizeRows = false;
			this->gvSelectCourse->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->gvSelectCourse->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->SelectList_Column0,
					this->SelectList_Column1, this->SelectList_Column2, this->SelectList_Column3
			});
			this->gvSelectCourse->Location = System::Drawing::Point(920, 350);
			this->gvSelectCourse->MultiSelect = false;
			this->gvSelectCourse->Name = L"gvSelectCourse";
			this->gvSelectCourse->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->gvSelectCourse->RowTemplate->Height = 23;
			this->gvSelectCourse->Size = System::Drawing::Size(454, 539);
			this->gvSelectCourse->TabIndex = 3;
			this->gvSelectCourse->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::gvSelectCourse_CellValueChanged);
			this->gvSelectCourse->RowHeaderMouseDoubleClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &MainForm::gvSelectCourse_RowHeaderMouseDoubleClick);
			this->gvSelectCourse->RowsAdded += gcnew System::Windows::Forms::DataGridViewRowsAddedEventHandler(this, &MainForm::gvSelectCourse_RowsAdded);
			this->gvSelectCourse->RowsRemoved += gcnew System::Windows::Forms::DataGridViewRowsRemovedEventHandler(this, &MainForm::gvSelectCourse_RowsRemoved);
			// 
			// SelectList_Column0
			// 
			this->SelectList_Column0->HeaderText = L"num";
			this->SelectList_Column0->Name = L"SelectList_Column0";
			this->SelectList_Column0->Width = 35;
			// 
			// SelectList_Column1
			// 
			this->SelectList_Column1->HeaderText = L"�м���ȣ";
			this->SelectList_Column1->Name = L"SelectList_Column1";
			this->SelectList_Column1->ReadOnly = true;
			this->SelectList_Column1->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// SelectList_Column2
			// 
			this->SelectList_Column2->HeaderText = L"�������";
			this->SelectList_Column2->Name = L"SelectList_Column2";
			this->SelectList_Column2->ReadOnly = true;
			this->SelectList_Column2->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// SelectList_Column3
			// 
			this->SelectList_Column3->HeaderText = L"��米��";
			this->SelectList_Column3->Name = L"SelectList_Column3";
			this->SelectList_Column3->ReadOnly = true;
			this->SelectList_Column3->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// cbTargetCredit
			// 
			this->cbTargetCredit->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbTargetCredit->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->cbTargetCredit->FormattingEnabled = true;
			this->cbTargetCredit->Items->AddRange(gcnew cli::array< System::Object^  >(24) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24"
			});
			this->cbTargetCredit->Location = System::Drawing::Point(1014, 74);
			this->cbTargetCredit->Name = L"cbTargetCredit";
			this->cbTargetCredit->Size = System::Drawing::Size(257, 24);
			this->cbTargetCredit->TabIndex = 59;
			// 
			// lbTargetCredit
			// 
			this->lbTargetCredit->AutoSize = true;
			this->lbTargetCredit->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->lbTargetCredit->Location = System::Drawing::Point(932, 80);
			this->lbTargetCredit->Name = L"lbTargetCredit";
			this->lbTargetCredit->Size = System::Drawing::Size(76, 16);
			this->lbTargetCredit->TabIndex = 5;
			this->lbTargetCredit->Text = L"��ǥ ����";
			// 
			// lbIdxSelect
			// 
			this->lbIdxSelect->AutoSize = true;
			this->lbIdxSelect->Enabled = false;
			this->lbIdxSelect->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->lbIdxSelect->Location = System::Drawing::Point(267, 145);
			this->lbIdxSelect->Name = L"lbIdxSelect";
			this->lbIdxSelect->Size = System::Drawing::Size(118, 16);
			this->lbIdxSelect->TabIndex = 6;
			this->lbIdxSelect->Text = L"Idx�� ���� ����";
			this->lbIdxSelect->Visible = false;
			// 
			// tbIdxSelect
			// 
			this->tbIdxSelect->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbIdxSelect->Enabled = false;
			this->tbIdxSelect->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->tbIdxSelect->Location = System::Drawing::Point(391, 140);
			this->tbIdxSelect->Name = L"tbIdxSelect";
			this->tbIdxSelect->Size = System::Drawing::Size(145, 26);
			this->tbIdxSelect->TabIndex = 8;
			this->tbIdxSelect->Visible = false;
			this->tbIdxSelect->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::tbIdxSelect_KeyPress);
			// 
			// btIdxSelect
			// 
			this->btIdxSelect->Enabled = false;
			this->btIdxSelect->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->btIdxSelect->Location = System::Drawing::Point(542, 138);
			this->btIdxSelect->Name = L"btIdxSelect";
			this->btIdxSelect->Size = System::Drawing::Size(80, 30);
			this->btIdxSelect->TabIndex = 9;
			this->btIdxSelect->Text = L"�߰�";
			this->btIdxSelect->UseVisualStyleBackColor = true;
			this->btIdxSelect->Visible = false;
			this->btIdxSelect->Click += gcnew System::EventHandler(this, &MainForm::btIdxSelect_Click);
			// 
			// lbRestDay
			// 
			this->lbRestDay->AutoSize = true;
			this->lbRestDay->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->lbRestDay->Location = System::Drawing::Point(932, 115);
			this->lbRestDay->Name = L"lbRestDay";
			this->lbRestDay->Size = System::Drawing::Size(76, 16);
			this->lbRestDay->TabIndex = 12;
			this->lbRestDay->Text = L"���� ����";
			// 
			// cbRestDay0
			// 
			this->cbRestDay0->AutoSize = true;
			this->cbRestDay0->Location = System::Drawing::Point(1018, 115);
			this->cbRestDay0->Name = L"cbRestDay0";
			this->cbRestDay0->Size = System::Drawing::Size(36, 16);
			this->cbRestDay0->TabIndex = 60;
			this->cbRestDay0->Text = L"��";
			this->cbRestDay0->UseVisualStyleBackColor = true;
			this->cbRestDay0->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbRestDay0_CheckedChanged);
			// 
			// cbRestDay1
			// 
			this->cbRestDay1->AutoSize = true;
			this->cbRestDay1->Location = System::Drawing::Point(1070, 115);
			this->cbRestDay1->Name = L"cbRestDay1";
			this->cbRestDay1->Size = System::Drawing::Size(36, 16);
			this->cbRestDay1->TabIndex = 61;
			this->cbRestDay1->Text = L"ȭ";
			this->cbRestDay1->UseVisualStyleBackColor = true;
			this->cbRestDay1->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbRestDay1_CheckedChanged);
			// 
			// cbRestDay2
			// 
			this->cbRestDay2->AutoSize = true;
			this->cbRestDay2->Location = System::Drawing::Point(1122, 115);
			this->cbRestDay2->Name = L"cbRestDay2";
			this->cbRestDay2->Size = System::Drawing::Size(36, 16);
			this->cbRestDay2->TabIndex = 62;
			this->cbRestDay2->Text = L"��";
			this->cbRestDay2->UseVisualStyleBackColor = true;
			this->cbRestDay2->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbRestDay2_CheckedChanged);
			// 
			// cbRestDay3
			// 
			this->cbRestDay3->AutoSize = true;
			this->cbRestDay3->Location = System::Drawing::Point(1174, 115);
			this->cbRestDay3->Name = L"cbRestDay3";
			this->cbRestDay3->Size = System::Drawing::Size(36, 16);
			this->cbRestDay3->TabIndex = 63;
			this->cbRestDay3->Text = L"��";
			this->cbRestDay3->UseVisualStyleBackColor = true;
			this->cbRestDay3->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbRestDay3_CheckedChanged);
			// 
			// cbRestDay4
			// 
			this->cbRestDay4->AutoSize = true;
			this->cbRestDay4->Location = System::Drawing::Point(1226, 115);
			this->cbRestDay4->Name = L"cbRestDay4";
			this->cbRestDay4->Size = System::Drawing::Size(36, 16);
			this->cbRestDay4->TabIndex = 64;
			this->cbRestDay4->Text = L"��";
			this->cbRestDay4->UseVisualStyleBackColor = true;
			this->cbRestDay4->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbRestDay4_CheckedChanged);
			// 
			// cbSetRangeCredit
			// 
			this->cbSetRangeCredit->AutoSize = true;
			this->cbSetRangeCredit->Location = System::Drawing::Point(1280, 80);
			this->cbSetRangeCredit->Name = L"cbSetRangeCredit";
			this->cbSetRangeCredit->Size = System::Drawing::Size(76, 16);
			this->cbSetRangeCredit->TabIndex = 58;
			this->cbSetRangeCredit->Text = L"���� ����";
			this->cbSetRangeCredit->UseVisualStyleBackColor = true;
			this->cbSetRangeCredit->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbSetRangeCredit_CheckedChanged);
			// 
			// cbRestDay5
			// 
			this->cbRestDay5->AutoSize = true;
			this->cbRestDay5->Enabled = false;
			this->cbRestDay5->Location = System::Drawing::Point(1278, 115);
			this->cbRestDay5->Name = L"cbRestDay5";
			this->cbRestDay5->Size = System::Drawing::Size(86, 16);
			this->cbRestDay5->TabIndex = 65;
			this->cbRestDay5->Text = L"�� (�̱���)";
			this->cbRestDay5->UseVisualStyleBackColor = true;
			this->cbRestDay5->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbRestDay5_CheckedChanged);
			// 
			// lbRestTime
			// 
			this->lbRestTime->AutoSize = true;
			this->lbRestTime->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->lbRestTime->Location = System::Drawing::Point(932, 151);
			this->lbRestTime->Name = L"lbRestTime";
			this->lbRestTime->Size = System::Drawing::Size(76, 16);
			this->lbRestTime->TabIndex = 20;
			this->lbRestTime->Text = L"�ð� ����";
			// 
			// cbRestTimeDay
			// 
			this->cbRestTimeDay->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbRestTimeDay->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->cbRestTimeDay->FormattingEnabled = true;
			this->cbRestTimeDay->Location = System::Drawing::Point(1014, 145);
			this->cbRestTimeDay->Name = L"cbRestTimeDay";
			this->cbRestTimeDay->Size = System::Drawing::Size(50, 24);
			this->cbRestTimeDay->TabIndex = 66;
			// 
			// cbRestTimeStart
			// 
			this->cbRestTimeStart->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbRestTimeStart->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->cbRestTimeStart->FormattingEnabled = true;
			this->cbRestTimeStart->Location = System::Drawing::Point(1070, 145);
			this->cbRestTimeStart->Name = L"cbRestTimeStart";
			this->cbRestTimeStart->Size = System::Drawing::Size(100, 24);
			this->cbRestTimeStart->TabIndex = 67;
			// 
			// cbRestTimeEnd
			// 
			this->cbRestTimeEnd->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbRestTimeEnd->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->cbRestTimeEnd->FormattingEnabled = true;
			this->cbRestTimeEnd->Location = System::Drawing::Point(1195, 145);
			this->cbRestTimeEnd->Name = L"cbRestTimeEnd";
			this->cbRestTimeEnd->Size = System::Drawing::Size(100, 24);
			this->cbRestTimeEnd->TabIndex = 68;
			// 
			// btRestTimeAdd
			// 
			this->btRestTimeAdd->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->btRestTimeAdd->Location = System::Drawing::Point(1301, 145);
			this->btRestTimeAdd->Name = L"btRestTimeAdd";
			this->btRestTimeAdd->Size = System::Drawing::Size(55, 24);
			this->btRestTimeAdd->TabIndex = 69;
			this->btRestTimeAdd->Text = L"�߰�";
			this->btRestTimeAdd->UseVisualStyleBackColor = true;
			this->btRestTimeAdd->Click += gcnew System::EventHandler(this, &MainForm::btRestTimeAdd_Click);
			// 
			// lbRestTimeStoE
			// 
			this->lbRestTimeStoE->AutoSize = true;
			this->lbRestTimeStoE->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->lbRestTimeStoE->Location = System::Drawing::Point(1173, 149);
			this->lbRestTimeStoE->Name = L"lbRestTimeStoE";
			this->lbRestTimeStoE->Size = System::Drawing::Size(19, 16);
			this->lbRestTimeStoE->TabIndex = 25;
			this->lbRestTimeStoE->Text = L"~";
			// 
			// gvRestTimeList
			// 
			this->gvRestTimeList->AllowUserToAddRows = false;
			this->gvRestTimeList->AllowUserToDeleteRows = false;
			this->gvRestTimeList->AllowUserToResizeRows = false;
			this->gvRestTimeList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->gvRestTimeList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2
			});
			this->gvRestTimeList->Location = System::Drawing::Point(919, 179);
			this->gvRestTimeList->MultiSelect = false;
			this->gvRestTimeList->Name = L"gvRestTimeList";
			this->gvRestTimeList->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->gvRestTimeList->RowTemplate->Height = 23;
			this->gvRestTimeList->Size = System::Drawing::Size(454, 156);
			this->gvRestTimeList->TabIndex = 2;
			this->gvRestTimeList->RowHeaderMouseDoubleClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &MainForm::gvRestTimeList_RowHeaderMouseDoubleClick);
			this->gvRestTimeList->RowsAdded += gcnew System::Windows::Forms::DataGridViewRowsAddedEventHandler(this, &MainForm::gvRestTimeList_RowsAdded);
			this->gvRestTimeList->RowsRemoved += gcnew System::Windows::Forms::DataGridViewRowsRemovedEventHandler(this, &MainForm::gvRestTimeList_RowsRemoved);
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"num";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->dataGridViewTextBoxColumn1->Width = 35;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"���� �ð�";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->dataGridViewTextBoxColumn2->Width = 375;
			// 
			// lbCurriculum
			// 
			this->lbCurriculum->AutoSize = true;
			this->lbCurriculum->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->lbCurriculum->Location = System::Drawing::Point(9, 28);
			this->lbCurriculum->Name = L"lbCurriculum";
			this->lbCurriculum->Size = System::Drawing::Size(71, 16);
			this->lbCurriculum->TabIndex = 27;
			this->lbCurriculum->Text = L"��������";
			// 
			// cbCurriculum
			// 
			this->cbCurriculum->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbCurriculum->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->cbCurriculum->FormattingEnabled = true;
			this->cbCurriculum->Location = System::Drawing::Point(83, 23);
			this->cbCurriculum->Name = L"cbCurriculum";
			this->cbCurriculum->Size = System::Drawing::Size(150, 24);
			this->cbCurriculum->TabIndex = 50;
			this->cbCurriculum->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::cbCurriculum_SelectedIndexChanged);
			// 
			// cbUniversity
			// 
			this->cbUniversity->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbUniversity->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->cbUniversity->FormattingEnabled = true;
			this->cbUniversity->Location = System::Drawing::Point(308, 23);
			this->cbUniversity->Name = L"cbUniversity";
			this->cbUniversity->Size = System::Drawing::Size(250, 24);
			this->cbUniversity->TabIndex = 51;
			// 
			// lbUniversity
			// 
			this->lbUniversity->AutoSize = true;
			this->lbUniversity->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->lbUniversity->Location = System::Drawing::Point(266, 28);
			this->lbUniversity->Name = L"lbUniversity";
			this->lbUniversity->Size = System::Drawing::Size(39, 16);
			this->lbUniversity->TabIndex = 29;
			this->lbUniversity->Text = L"����";
			// 
			// lbMajor
			// 
			this->lbMajor->AutoSize = true;
			this->lbMajor->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->lbMajor->Location = System::Drawing::Point(589, 28);
			this->lbMajor->Name = L"lbMajor";
			this->lbMajor->Size = System::Drawing::Size(39, 16);
			this->lbMajor->TabIndex = 31;
			this->lbMajor->Text = L"����";
			// 
			// cbMajor
			// 
			this->cbMajor->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbMajor->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->cbMajor->FormattingEnabled = true;
			this->cbMajor->Location = System::Drawing::Point(631, 23);
			this->cbMajor->Name = L"cbMajor";
			this->cbMajor->Size = System::Drawing::Size(250, 24);
			this->cbMajor->TabIndex = 52;
			// 
			// btSearch
			// 
			this->btSearch->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->btSearch->Location = System::Drawing::Point(749, 67);
			this->btSearch->Name = L"btSearch";
			this->btSearch->Size = System::Drawing::Size(63, 30);
			this->btSearch->TabIndex = 56;
			this->btSearch->Text = L"��ȸ";
			this->btSearch->UseVisualStyleBackColor = true;
			this->btSearch->Click += gcnew System::EventHandler(this, &MainForm::btSearch_Click);
			// 
			// lbCourseName
			// 
			this->lbCourseName->AutoSize = true;
			this->lbCourseName->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->lbCourseName->Location = System::Drawing::Point(25, 74);
			this->lbCourseName->Name = L"lbCourseName";
			this->lbCourseName->Size = System::Drawing::Size(55, 16);
			this->lbCourseName->TabIndex = 34;
			this->lbCourseName->Text = L"���Ǹ�";
			// 
			// tbCourseName
			// 
			this->tbCourseName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbCourseName->Font = (gcnew System::Drawing::Font(L"����", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->tbCourseName->Location = System::Drawing::Point(83, 70);
			this->tbCourseName->Name = L"tbCourseName";
			this->tbCourseName->Size = System::Drawing::Size(170, 25);
			this->tbCourseName->TabIndex = 53;
			this->tbCourseName->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::SearchFilter_KeyPress);
			// 
			// gbSearchCourse
			// 
			this->gbSearchCourse->BackColor = System::Drawing::SystemColors::ControlLight;
			this->gbSearchCourse->Controls->Add(this->tbCourseID);
			this->gbSearchCourse->Controls->Add(this->lbCourseID);
			this->gbSearchCourse->Controls->Add(this->btRefresh);
			this->gbSearchCourse->Controls->Add(this->tbProfessor);
			this->gbSearchCourse->Controls->Add(this->btSearch);
			this->gbSearchCourse->Controls->Add(this->cbCurriculum);
			this->gbSearchCourse->Controls->Add(this->tbCourseName);
			this->gbSearchCourse->Controls->Add(this->lbProfessor);
			this->gbSearchCourse->Controls->Add(this->lbCurriculum);
			this->gbSearchCourse->Controls->Add(this->lbUniversity);
			this->gbSearchCourse->Controls->Add(this->cbUniversity);
			this->gbSearchCourse->Controls->Add(this->cbMajor);
			this->gbSearchCourse->Controls->Add(this->lbMajor);
			this->gbSearchCourse->Controls->Add(this->lbCourseName);
			this->gbSearchCourse->Location = System::Drawing::Point(11, 15);
			this->gbSearchCourse->Name = L"gbSearchCourse";
			this->gbSearchCourse->Size = System::Drawing::Size(895, 113);
			this->gbSearchCourse->TabIndex = 36;
			this->gbSearchCourse->TabStop = false;
			// 
			// tbCourseID
			// 
			this->tbCourseID->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbCourseID->Font = (gcnew System::Drawing::Font(L"����", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->tbCourseID->Location = System::Drawing::Point(342, 70);
			this->tbCourseID->Name = L"tbCourseID";
			this->tbCourseID->Size = System::Drawing::Size(150, 25);
			this->tbCourseID->TabIndex = 54;
			this->tbCourseID->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::SearchFilter_KeyPress);
			// 
			// lbCourseID
			// 
			this->lbCourseID->AutoSize = true;
			this->lbCourseID->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->lbCourseID->Location = System::Drawing::Point(268, 74);
			this->lbCourseID->Name = L"lbCourseID";
			this->lbCourseID->Size = System::Drawing::Size(71, 16);
			this->lbCourseID->TabIndex = 39;
			this->lbCourseID->Text = L"�м���ȣ";
			// 
			// btRefresh
			// 
			this->btRefresh->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->btRefresh->Location = System::Drawing::Point(818, 67);
			this->btRefresh->Name = L"btRefresh";
			this->btRefresh->Size = System::Drawing::Size(63, 30);
			this->btRefresh->TabIndex = 57;
			this->btRefresh->Text = L"�ʱ�ȭ";
			this->btRefresh->UseVisualStyleBackColor = true;
			this->btRefresh->Click += gcnew System::EventHandler(this, &MainForm::btRefresh_Click);
			// 
			// tbProfessor
			// 
			this->tbProfessor->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbProfessor->Font = (gcnew System::Drawing::Font(L"����", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->tbProfessor->Location = System::Drawing::Point(580, 70);
			this->tbProfessor->Name = L"tbProfessor";
			this->tbProfessor->Size = System::Drawing::Size(150, 25);
			this->tbProfessor->TabIndex = 55;
			this->tbProfessor->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::SearchFilter_KeyPress);
			// 
			// lbProfessor
			// 
			this->lbProfessor->AutoSize = true;
			this->lbProfessor->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->lbProfessor->Location = System::Drawing::Point(506, 74);
			this->lbProfessor->Name = L"lbProfessor";
			this->lbProfessor->Size = System::Drawing::Size(71, 16);
			this->lbProfessor->TabIndex = 36;
			this->lbProfessor->Text = L"��米��";
			// 
			// btMessageLoadCourseList
			// 
			this->btMessageLoadCourseList->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btMessageLoadCourseList->Font = (gcnew System::Drawing::Font(L"���������� Bold", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->btMessageLoadCourseList->Location = System::Drawing::Point(270, 389);
			this->btMessageLoadCourseList->Name = L"btMessageLoadCourseList";
			this->btMessageLoadCourseList->Size = System::Drawing::Size(360, 150);
			this->btMessageLoadCourseList->TabIndex = 71;
			this->btMessageLoadCourseList->Text = L"���� ����Ʈ �ҷ����� ��...";
			this->btMessageLoadCourseList->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1384, 901);
			this->Controls->Add(this->btMessageLoadCourseList);
			this->Controls->Add(this->gbSearchCourse);
			this->Controls->Add(this->gvRestTimeList);
			this->Controls->Add(this->lbRestTimeStoE);
			this->Controls->Add(this->btRestTimeAdd);
			this->Controls->Add(this->cbRestTimeEnd);
			this->Controls->Add(this->cbRestTimeStart);
			this->Controls->Add(this->cbRestTimeDay);
			this->Controls->Add(this->lbRestTime);
			this->Controls->Add(this->cbRestDay5);
			this->Controls->Add(this->cbSetRangeCredit);
			this->Controls->Add(this->cbRestDay4);
			this->Controls->Add(this->cbRestDay3);
			this->Controls->Add(this->cbRestDay2);
			this->Controls->Add(this->cbRestDay1);
			this->Controls->Add(this->cbRestDay0);
			this->Controls->Add(this->lbRestDay);
			this->Controls->Add(this->btIdxSelect);
			this->Controls->Add(this->tbIdxSelect);
			this->Controls->Add(this->lbIdxSelect);
			this->Controls->Add(this->lbTargetCredit);
			this->Controls->Add(this->cbTargetCredit);
			this->Controls->Add(this->gvSelectCourse);
			this->Controls->Add(this->gvCourseList);
			this->Controls->Add(this->btCallGenerator);
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->Text = L"�ð�ǥ ������";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gvCourseList))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gvSelectCourse))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gvRestTimeList))->EndInit();
			this->gbSearchCourse->ResumeLayout(false);
			this->gbSearchCourse->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}



#pragma endregion
	private:
		static String^ ToGcString(string& _std_string) { return gcnew String(_std_string.data()); }

		static string ToStdString(String^ _gc_string) {
			using namespace Runtime::InteropServices;
			const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(_gc_string)).ToPointer();
			string _std_string = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
			return _std_string;
		}

		static DateTime Delay(int ms) {   // ������ �Լ�
			DateTime ThisMoment = DateTime::Now;
			TimeSpan duration = TimeSpan(0, 0, 0, 0, ms);
			DateTime AfterWards = ThisMoment.Add(duration);
			while (AfterWards >= ThisMoment) {
				System::Windows::Forms::Application::DoEvents(); ThisMoment = DateTime::Now;
			}
			return DateTime::Now;
		}



	private:
		const int mMaxSelectCount = 60;
		const int mNumberOfLank = 6;

		bool mProcessCheck_Initializing = false;
		bool mProcessCheck_SelectCourse = false;
		bool mProcessCheck_UnSelectCourse = false;
		bool mProcessCheck_ModifySelectedCourseLank = false;

		vector<Course>* mCourseList;
		vector<pair<int, Course>>* mSelectedCourseInfoList;

		unordered_set<string>* mRestDaySet;
		vector<Course::LectureTime>* mRestTimeList;




	private:   // ��� �ʱ�ȭ
		System::Void InitialzerMembers() {
			Init_SearchCourse();
			Init_CourseList();
			Init_SelectedCourse();
			Init_TargetCredit();
			Init_Rest();
		}

		System::Void Init_SearchCourse() {
			cbCurriculum->Items->Add("����");
			cbCurriculum->Items->Add("���뱳��");
			cbCurriculum->Items->Add("�ٽɱ���");
			cbCurriculum->Items->Add("�й�����");
			cbCurriculum->Items->Add("�Ϲݱ���");
			cbCurriculum->Items->Add("������������");
			cbCurriculum->Items->Add("����");
			cbCurriculum->Items->Add("������");
			cbCurriculum->Items->Add("�������");
			cbCurriculum->Items->Add("��������");
			cbCurriculum->Items->Add("�����׸�");
			cbCurriculum->SelectedIndex = 0;

			cbUniversity->Items->Add("��������");
			cbUniversity->SelectedIndex = 0;

			cbMajor->Items->Add("��ǻ�Ͱ�������");
			cbMajor->Items->Add("��Ƽ�̵����а�");
			cbMajor->SelectedIndex = 0;

			tbCourseName->Text = "";
			tbCourseID->Text = "";
			tbProfessor->Text = "";
		}

		System::Void Init_CourseList() {
			mCourseList = new vector<Course>();
			btMessageLoadCourseList->Visible = false;
		}

		System::Void Init_SelectedCourse() {
			mSelectedCourseInfoList = new vector<pair<int, Course>>();
			DataGridViewComboBoxColumn^ cbColumn = gcnew DataGridViewComboBoxColumn();

			cbColumn->Width = 75;
			cbColumn->HeaderText = "��ȣ��";
			cbColumn->DisplayStyle = DataGridViewComboBoxDisplayStyle::ComboBox;
			cbColumn->Items->Add("0) �ʼ�");
			cbColumn->Items->Add("1) *****");
			cbColumn->Items->Add("2) ****");
			cbColumn->Items->Add("3) ***");
			cbColumn->Items->Add("4) **");
			cbColumn->Items->Add("5) *");
			gvSelectCourse->Columns->Add(cbColumn);
		}

		System::Void Init_TargetCredit() {
			cbTargetCredit->SelectedIndex = 0;
		}

		System::Void Init_Rest() {
			mRestDaySet = new unordered_set<string>();
			mRestTimeList = new vector<Course::LectureTime>();

			cbRestTimeDay->Items->Add("��");
			cbRestTimeDay->Items->Add("ȭ");
			cbRestTimeDay->Items->Add("��");
			cbRestTimeDay->Items->Add("��");
			cbRestTimeDay->Items->Add("��");
			cbRestTimeDay->Items->Add("��");
			cbRestTimeDay->SelectedIndex = 0;

			for (int h = 8; h < 24; h++) {
				for (int m = 0; m < 60; m += 30) {
					cbRestTimeStart->Items->Add((h < 10 ? "0" : "") + h.ToString() + ":" + (m < 10 ? "0" : "") + m.ToString());
					cbRestTimeEnd->Items->Add((h < 10 ? "0" : "") + h.ToString() + ":" + (m < 10 ? "0" : "") + m.ToString());
				}
			}
			cbRestTimeStart->Items->RemoveAt(cbRestTimeStart->Items->Count - 1);
			cbRestTimeEnd->Items->RemoveAt(0);
			cbRestTimeStart->SelectedIndex = 0;
			cbRestTimeEnd->SelectedIndex = 0;
		}



	private:   // Ŀ��ŧ�� ���ÿ� ���� �̺�Ʈ
		System::Void cbCurriculum_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			if (mProcessCheck_Initializing) return;

			if (cbCurriculum->SelectedIndex == 0) {
				lbUniversity->Visible = true;
				cbUniversity->Visible = true;

				lbMajor->Visible = true;
				cbMajor->Visible = true;

				cbUniversity->SelectedIndex = 0;
				cbMajor->SelectedIndex = 0;
			}
			else {
				lbUniversity->Visible = false;
				cbUniversity->Visible = false;

				lbMajor->Visible = false;
				cbMajor->Visible = false;
			}
		}



	private:   // ���� ���ǿ� �´� ���� ����Ʈ�� �ҷ��´�
		System::Void Reset_gvCourseList() {
			gvCourseList->Rows->Clear();
			gvCourseList->Columns[0]->Width = 35;
			gvCourseList->Columns[1]->Width = 100;
			gvCourseList->Columns[2]->Width = 100;
			gvCourseList->Columns[3]->Width = 117;
			gvCourseList->Columns[4]->Width = 100;
			gvCourseList->Columns[5]->Width = 100;
			gvCourseList->Columns[6]->Width = 100;
			gvCourseList->Columns[7]->Width = 100;
			gvCourseList->Columns[8]->Width = 100;
		}

		System::Void TextBoxSpaceCleaning(TextBox^ textBox) {   // �ؽ�Ʈ�ڽ��� ���ʿ��� ���� ����

			String^ newString = "";

			int bCnt = 0;
			for (int i = textBox->Text->Length - 1; i >= 0; i--) {
				if (textBox->Text[i] != ' ') break;
				bCnt++;
			}

			bool start = false;
			for (int i = 0; i < textBox->Text->Length - bCnt; i++) {
				if (start) newString += textBox->Text[i];
				else  if (textBox->Text[i] != ' ') {
					newString += textBox->Text[i];
					start = true;
				}
			}

			textBox->Text = newString;
		}

		System::Void LoadCourse() {
			btMessageLoadCourseList->Visible = true;
			Delay(1);

			TextBoxSpaceCleaning(tbCourseName);
			TextBoxSpaceCleaning(tbCourseID);
			TextBoxSpaceCleaning(tbProfessor);


			// ���, ���� ����
			auto path = ToStdString("./documents/mdrims/");
			auto filter = tuple(ToStdString(tbCourseName->Text), ToStdString(tbCourseID->Text), ToStdString(tbProfessor->Text));

			path += cbCurriculum->SelectedIndex == 0 ?
				ToStdString("/����" + "/" + (cbUniversity->Text) + "/" + cbMajor->Text + ".csv") : ToStdString("/" + (cbCurriculum->Text) + "/" + cbCurriculum->Text + ".csv");
			

			// �ҷ��� ���� ����Ʈ�� mCourseList�� ����
			*mCourseList = CourseManager::Load_CourseList(path, filter);   


			// �ҷ��� ���� ����Ʈ�� gvCourseList�� �߰��Ͽ� ����ڿ��� ������
			Reset_gvCourseList();
			for (auto& course : *mCourseList) {   
				gvCourseList->Rows->Add(
					gvCourseList->Rows->Count.ToString(),
					ToGcString(course.curriculum),
					ToGcString(course.id.ToString()),
					ToGcString(course.name),
					course.credit,
					ToGcString(course.professor),
					course.times.size() > 0 ? ToGcString(course.times[0].ToString()) : ToGcString(string()),
					course.times.size() > 1 ? ToGcString(course.times[1].ToString()) : ToGcString(string()),
					course.times.size() > 2 ? ToGcString(course.times[2].ToString()) : ToGcString(string())
				);
			}

			btMessageLoadCourseList->Visible = false;
			Delay(1);
		}

		System::Void btSearch_Click(System::Object^ sender, System::EventArgs^ e) {   // ��ȸ ��ư�� Ŭ���� ���
			if (mProcessCheck_Initializing) return;
			LoadCourse();
		}
		
		System::Void SearchFilter_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {   // ���� ������ �Է��ϴ� �ؽ�Ʈ�ڽ� ������ enterŰ�� ������ ��
			if (mProcessCheck_Initializing) return;
			if (e->KeyChar == (char)Keys::Enter) LoadCourse();
		}

	

	private:
		System::Void btRefresh_Click(System::Object^ sender, System::EventArgs^ e) {
			if (mProcessCheck_Initializing) return;

			cbCurriculum->SelectedIndex = 0;
			cbUniversity->SelectedIndex = 0;
			cbMajor->SelectedIndex = 0;
			tbCourseName->Text = "";
			tbCourseID->Text = "";
			tbProfessor->Text = "";

			Reset_gvCourseList();
		}



	private:   // gvCourseList���� scroll�� ������ ���� 3�� column�� �ʺ� �����ؾ� �Ѵ�
		System::Void gvCourseList_RowsAdded(System::Object^ sender, System::Windows::Forms::DataGridViewRowsAddedEventArgs^ e) {
			if (gvCourseList->Rows->Count > 29)
				gvCourseList->Columns[3]->Width = 100;
		}

		System::Void gvCourseList_RowsRemoved(System::Object^ sender, System::Windows::Forms::DataGridViewRowsRemovedEventArgs^ e) {
			if (gvCourseList->Rows->Count < 30)
				gvCourseList->Columns[3]->Width = 117;
		}



	private: // gvCourseList���� ������ �����ϴ� �̺�Ʈ
		System::Boolean IsAlreadySelectedCourse(Course& newCourse) {
			for (auto& selectedCourseInfo : *mSelectedCourseInfoList)
				if (selectedCourseInfo.second == newCourse) return true;
			return false;
		}

		System::Boolean IsFullSelectedCourse() {
			return (int)mSelectedCourseInfoList->size() < mMaxSelectCount ? false : true;
		}

		System::Void SelectCourse(Course& newCourse) {	// gvCourseList���� ������ ������ gvSelectedCourse�� �߰�
			if (IsAlreadySelectedCourse(newCourse)) { MessageBox::Show("�̹� ������ �����Դϴ�"); return; }   // �̹� ������ �����̸� �߰��ϴ� ������ �������� ����
			if (IsFullSelectedCourse()) { MessageBox::Show("�ִ� " + mMaxSelectCount + "���� ������ ������ �� �ֽ��ϴ�(TimeTable - Beta)"); return; }   // �ִ�� ������ �� �ִ� ���� Ȯ��

			// mSelectedCourseInfoList�� ������ ���� �߰�
			mSelectedCourseInfoList->push_back({ mNumberOfLank - 1, newCourse });
			sort(mSelectedCourseInfoList->begin(), mSelectedCourseInfoList->end());

			// gvSelectedCourse�� ������ ����	
			int idx = -1;
			gvSelectCourse->Rows->Add();
			for (auto& [lank, course] : *mSelectedCourseInfoList) {
				auto cells = gvSelectCourse->Rows[++idx]->Cells;
				cells[0]->Value = idx;
				cells[1]->Value = ToGcString(course.id.ToString());
				cells[2]->Value = ToGcString(course.name);
				cells[3]->Value = ToGcString(course.professor);
				cells[4]->Value = ((DataGridViewComboBoxCell^)cells[4])->Items[lank];
				gvSelectCourse->Rows[idx]->DefaultCellStyle->BackColor = (lank == 0 ? Color::LightSalmon : Color::White);   // �ʼ������� ����ó��
			}
		}

		System::Void gridView_courseList_RowHeaderMouseDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e) {	// ���� Ŭ��
			mProcessCheck_SelectCourse = true;
			SelectCourse((*mCourseList)[e->RowIndex]);
			mProcessCheck_SelectCourse = false;
		}

		System::Void btIdxSelect_Click(System::Object^ sender, System::EventArgs^ e) {	// Idx �Է� �� ��ư
			mProcessCheck_SelectCourse = true;

			int idx = -1;
			if (int::TryParse(tbIdxSelect->Text, idx)) {
				if (0 <= idx && idx < (int)(*mCourseList).size()) SelectCourse((*mCourseList)[idx]);
				else MessageBox::Show("Idx �ִ밪�� " + ((int)(*mCourseList).size() - 1) + "�Դϴ�");
			}
			else MessageBox::Show("\"" + tbIdxSelect->Text + "\"��(��) " + "�ڿ����� ��ȯ�� �� �����ϴ�");
			tbIdxSelect->Text = "";

			mProcessCheck_SelectCourse = false;
		}

		System::Void tbIdxSelect_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {	// Idx �Է� �� enterŰ
			mProcessCheck_SelectCourse = true;

			if (e->KeyChar == (char)Keys::Enter) {
				int idx = -1;
				if (int::TryParse(tbIdxSelect->Text, idx)) {
					if (0 <= idx && idx < (int)(*mCourseList).size()) SelectCourse((*mCourseList)[idx]);
					else MessageBox::Show("Idx �ִ밪�� " + ((int)(*mCourseList).size() - 1) + "�Դϴ�");
				}
				else MessageBox::Show("\"" + tbIdxSelect->Text + "\"��(��) " + "�ڿ����� ��ȯ�� �� �����ϴ�");
				tbIdxSelect->Text = "";
			}

			mProcessCheck_SelectCourse = false;
		}



	private: // gvSelectCourse���� ������ ������ �����ϴ� �̺�Ʈ
		System::Void gvSelectCourse_RowHeaderMouseDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e) {
			mProcessCheck_UnSelectCourse = true;

			int idx = e->RowIndex;

			// mSelectedCourseInfoList�� idx��° ���� ����	
			mSelectedCourseInfoList->erase(mSelectedCourseInfoList->begin() + idx);

			// gvSelectedCourse�� idx��° ���� �����ϰ� �ѹ����� �ٽ� �Ѵ�
			gvSelectCourse->Rows->RemoveAt(idx);
			for (int i = 0; i < gvSelectCourse->Rows->Count; i++)
				gvSelectCourse->Rows[i]->Cells[0]->Value = i;

			mProcessCheck_UnSelectCourse = false;
		}



	private: // gvSelectCourse���� scroll�� ������ ���� 3�� column�� �ʺ� �����ؾ� �Ѵ�
		System::Void gvSelectCourse_RowsAdded(System::Object^ sender, System::Windows::Forms::DataGridViewRowsAddedEventArgs^ e) {
			if (gvSelectCourse->Rows->Count > 31)
				gvSelectCourse->Columns[3]->Width = 82;
		}

		System::Void gvSelectCourse_RowsRemoved(System::Object^ sender, System::Windows::Forms::DataGridViewRowsRemovedEventArgs^ e) {
			if (gvSelectCourse->Rows->Count < 32)
				gvSelectCourse->Columns[3]->Width = 100;
		}



	private: // gvSelectCourse���� ������ �켱������ �������� ��, �߻��ϴ� ���� �̺�Ʈ
		System::Void gvSelectCourse_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
			if (mProcessCheck_Initializing || mProcessCheck_SelectCourse || mProcessCheck_UnSelectCourse || mProcessCheck_ModifySelectedCourseLank) return;
			mProcessCheck_ModifySelectedCourseLank = true;

			int eColumnIdx = e->ColumnIndex;
			int eRowIdx = e->RowIndex;

			if (eColumnIdx == 4) {
				// mSelectedCourseInfoList�� eRowIdx��° ������ Lank����
				(*mSelectedCourseInfoList)[eRowIdx].first = ToStdString(gvSelectCourse->Rows[eRowIdx]->Cells[4]->Value->ToString())[0] - 48;
				sort(mSelectedCourseInfoList->begin(), mSelectedCourseInfoList->end());

				// gvSelectedCourse�� ������ ����
				int idx = -1;
				for (auto& [lank, course] : *mSelectedCourseInfoList) {
					auto cells = gvSelectCourse->Rows[++idx]->Cells;
					cells[0]->Value = idx;
					cells[1]->Value = ToGcString(course.id.ToString());
					cells[2]->Value = ToGcString(course.name);
					cells[3]->Value = ToGcString(course.professor);
					cells[4]->Value = ((DataGridViewComboBoxCell^)cells[4])->Items[lank];
					gvSelectCourse->Rows[idx]->DefaultCellStyle->BackColor = (lank == 0 ? Color::LightSalmon : Color::White);   // �ʼ������� ����ó��
				}
			}

			mProcessCheck_ModifySelectedCourseLank = false;
		}



	private:   // ���� ���� ����� ������ �Ǵ� ���ϰ� ����
		System::Void cbSetRangeCredit_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (mProcessCheck_Initializing) return;

			cbTargetCredit->Items->Clear();

			if (cbSetRangeCredit->Checked) {
				for (int i = 1; i < 23; i++)
					cbTargetCredit->Items->Add(i + " ~ " + (i + 2));
			}
			else {
				for (int i = 1; i < 25; i++)
					cbTargetCredit->Items->Add(i);
			}

			cbTargetCredit->SelectedIndex = 0;
		}



	private:   // ���� ���� ��ư�� ���� �̺�Ʈ ó��
		System::Void SelectRestDay(string day) {
			if (mRestDaySet->find(day) == mRestDaySet->end()) mRestDaySet->insert(day);
		}

		System::Void UnSelectRestDay(string day) {
			if (mRestDaySet->find(day) != mRestDaySet->end()) mRestDaySet->erase(day);
		}

		System::Void cbRestDay0_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { ((CheckBox^)sender)->Checked ? SelectRestDay("��") : UnSelectRestDay("��"); }
		System::Void cbRestDay1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { ((CheckBox^)sender)->Checked ? SelectRestDay("ȭ") : UnSelectRestDay("ȭ"); }
		System::Void cbRestDay2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { ((CheckBox^)sender)->Checked ? SelectRestDay("��") : UnSelectRestDay("��"); }
		System::Void cbRestDay3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { ((CheckBox^)sender)->Checked ? SelectRestDay("��") : UnSelectRestDay("��"); }
		System::Void cbRestDay4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { ((CheckBox^)sender)->Checked ? SelectRestDay("��") : UnSelectRestDay("��"); }
		System::Void cbRestDay5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { ((CheckBox^)sender)->Checked ? SelectRestDay("��") : UnSelectRestDay("��"); }



	private:   // �ð� ������ �߰��ϴ� �̺�Ʈ
		System::Void btRestTimeAdd_Click(System::Object^ sender, System::EventArgs^ e) {
			if (cbRestTimeStart->SelectedIndex > cbRestTimeEnd->SelectedIndex) { MessageBox::Show("\'���� �ð�\'�� \'���� �ð�\'���� �����̾�� �մϴ�"); return; }

			auto day = ToStdString(cbRestTimeDay->Text);
			auto start = util::Split(ToStdString(cbRestTimeStart->Text), util::SplitType::Except, regex(R"(:)"));
			auto end = util::Split(ToStdString(cbRestTimeEnd->Text), util::SplitType::Except, regex(R"(:)"));

			mRestTimeList->push_back(Course::LectureTime({ day, stoi(start[0]) * 60 + stoi(start[1]),  stoi(end[0]) * 60 + stoi(end[1]) }));
			gvRestTimeList->Rows->Add(gvRestTimeList->Rows->Count, cbRestTimeDay->Text + ", " + cbRestTimeStart->Text + "~" + cbRestTimeEnd->Text);
		}



	private:   // �ð� ������ �����ϴ� �̺�Ʈ
		System::Void gvRestTimeList_RowHeaderMouseDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e) {
			int idx = e->RowIndex;

			// mSelectedCourseInfoList�� idx��° ���� ����	
			mRestTimeList->erase(mRestTimeList->begin() + idx);

			// gvSelectedCourse�� idx��° ���� �����ϰ� �ѹ����� �ٽ� �Ѵ�
			gvRestTimeList->Rows->RemoveAt(idx);
			for (int i = 0; i < gvRestTimeList->Rows->Count; i++)
				gvRestTimeList->Rows[i]->Cells[0]->Value = i;
		}



	private:   // gvRestTimeList���� scroll�� ������ ���� 1�� column�� �ʺ� �����ؾ� �Ѵ�
		System::Void gvRestTimeList_RowsAdded(System::Object^ sender, System::Windows::Forms::DataGridViewRowsAddedEventArgs^ e) {
			if (gvRestTimeList->Rows->Count > 5)
				gvRestTimeList->Columns[1]->Width = 358;
		}
		
		System::Void gvRestTimeList_RowsRemoved(System::Object^ sender, System::Windows::Forms::DataGridViewRowsRemovedEventArgs^ e) {
			if (gvRestTimeList->Rows->Count < 6)
				gvRestTimeList->Columns[1]->Width = 375;
		}



	private: // ������ ������ �����ϰ� �ð�ǥ �����ϴ� �̺�Ʈ

		System::Boolean IsConflictWithRest(Course& course) {   // ������ course�� ���� ���� �Ǵ� ���� �ð��� ��ġ���� Ȯ��
			for (auto& lectureTime : course.times) {
				if (mRestDaySet->find(lectureTime.day) != mRestDaySet->end()) return true;   // course�� ���� ������ ���� ������ ���

				for (auto& restTime : *mRestTimeList)
					if (lectureTime.day == restTime.day && (lectureTime.start < restTime.end && lectureTime.end > restTime.start)) return true;   // course�� ���� �ð��� ���� �ð��� ���
			}
			return false;
		}


		System::Void btCallGenerator_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

			if (cbTargetCredit->SelectedIndex < 0) { MessageBox::Show("��ǥ ������ 1�̻����� �����ϼ���"); return; }

			auto targetCredit = cbSetRangeCredit->Checked ?
				pair<int, int>(cbTargetCredit->SelectedIndex + 1, cbTargetCredit->SelectedIndex + 3)
				: pair<int, int>(cbTargetCredit->SelectedIndex + 1, cbTargetCredit->SelectedIndex + 1);

			auto numberOfEssentialCourse = 0;
			auto numberOfNoramlCourse = 0;
			auto courseInfoList = vector<pair<Course, int>>(1);

			for (auto& [lank, course] : *mSelectedCourseInfoList) {
				if (IsConflictWithRest(course)) continue;   // ���� ����/�ð� Ȯ�� 

				lank == 0 ? ++numberOfEssentialCourse : ++numberOfNoramlCourse;
				courseInfoList.push_back({ course, lank });
			}

			auto timeTabForm = gcnew TimeTabForm(targetCredit, numberOfEssentialCourse, numberOfNoramlCourse, courseInfoList);
			timeTabForm->Show();
		}
};
}
