#pragma once

namespace Lz6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::DataGridView^ dataGridView2;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(813, 475);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dataGridView2);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(805, 449);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Завдання 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->ColumnHeadersVisible = false;
			this->dataGridView2->Location = System::Drawing::Point(8, 6);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->Size = System::Drawing::Size(503, 24);
			this->dataGridView2->TabIndex = 5;
			this->dataGridView2->ColumnCount = 5;
			this->dataGridView2->RowCount = 1;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(37, 212);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(84, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Відсортувати";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(150, 194);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(34, 194);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Найменший елемент:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(37, 241);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(84, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Обчислити";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(805, 449);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Завдання 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(37, 200);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(86, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Обчислити";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Location = System::Drawing::Point(8, 6);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(503, 113);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->ColumnCount = 5;
			this->dataGridView1->RowCount = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(159, 184);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(34, 184);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Мінімальний елемент:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(812, 474);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		int sumOfNegative(int arr[][5], int rows, int cols) {
			int sum = 0;

			for (int i = 0; i < rows; ++i) {
				for (int j = 0; j < cols; ++j) {
					if (arr[i][j] < 0) {
						sum += arr[i][j];
					}
				}
			}

			return sum;
		}

		int findMinElement(int arr[5], int rows) {
			int min_element = arr[0];

			for (int i = 0; i < rows; ++i) {
				if (arr[i] < min_element) {
					min_element = arr[i];
				}
			}
			return min_element;
		}

		void sort(int arr[], int size) {
			for (int i = 0; i < size - 1; ++i) {
				int maxIndex = i;
				for (int j = i + 1; j < size; ++j) {
					if (arr[j] > arr[maxIndex]) {
						maxIndex = j;
					}
				}
				if (maxIndex != i) {
					int temp = arr[i];
					arr[i] = arr[maxIndex];
					arr[maxIndex] = temp;
				}
			}
		}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Rows->Add(5);
		dataGridView2->Rows->Add(5);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int a[5];
		int n = 5;
		Random^ rnd = gcnew Random();
		for (int i = 0; i < n; i++)
		{
			dataGridView2->Rows[0]->Cells[i]->Value = Convert::ToString(rnd->Next(-50, 50));
			a[i] = Convert::ToDouble(dataGridView2->Rows[0]->Cells[i]->Value);
		}
		label4->Text = Convert::ToString(findMinElement(a, 5));
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int b[5][5];
		int n = 5, m = 5;
		Random^ rnd = gcnew Random();
		for (int i = 0; i < n; i++) {//рядок
			for (int j = 0; j < m; j++)//стовпець
			{
				dataGridView1[j, i]->Value = Convert::ToString(rnd->Next(-50, 50));
				b[i][j] = Convert::ToDouble(dataGridView1->Rows[i]->Cells[j]->Value);
			}
		}
		label2->Text = Convert::ToString(sumOfNegative(b, 5, 5));
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		int b[5];
		for (int i = 0; i < 5; i++) {
			b[i] = Convert::ToInt16(dataGridView2->Rows[0]->Cells[i]->Value);
		}
		sort(b, 5);
		for (int i = 0; i < 5; i++) {
			dataGridView2->Rows[0]->Cells[i]->Value = Convert::ToString(b[i]);
		}
	}
};
}
