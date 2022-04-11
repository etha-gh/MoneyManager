#pragma once

namespace MoneyManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// mainForm の概要
	/// </summary>
	

	public ref class mainForm : public System::Windows::Forms::Form
	{
	public:

		ref class MoneyData_Struct {
		public:
			String^ Date;
			String^ Detail;
			int Money;

			MoneyData_Struct(String^ da, String^ de, int money) {
				Date = da;
				Detail = de;
				Money = money;
			}
		};
		array<MoneyData_Struct^>^ moneyDataStackup = gcnew array<MoneyData_Struct^>(1);

		mainForm(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~mainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ InputMoney_button;
	public: System::Windows::Forms::DataGridView^ dataGridView1;
	private:
	protected:

	private: System::Windows::Forms::Button^ outputMoney_button;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DateTime;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Detail;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ InputMoney;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ OutputMoney;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ MoneyPool;

	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->InputMoney_button = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->outputMoney_button = (gcnew System::Windows::Forms::Button());
			this->DateTime = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Detail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->InputMoney = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->OutputMoney = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->MoneyPool = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// InputMoney_button
			// 
			this->InputMoney_button->Font = (gcnew System::Drawing::Font(L"游ゴシック", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->InputMoney_button->Location = System::Drawing::Point(12, 12);
			this->InputMoney_button->Name = L"InputMoney_button";
			this->InputMoney_button->Size = System::Drawing::Size(80, 40);
			this->InputMoney_button->TabIndex = 0;
			this->InputMoney_button->Text = L"歳入";
			this->InputMoney_button->UseVisualStyleBackColor = true;
			this->InputMoney_button->Click += gcnew System::EventHandler(this, &mainForm::InputMoney_button_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->DateTime,
					this->Detail, this->InputMoney, this->OutputMoney, this->MoneyPool
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 68);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 21;
			this->dataGridView1->Size = System::Drawing::Size(542, 228);
			this->dataGridView1->TabIndex = 2;
			// 
			// outputMoney_button
			// 
			this->outputMoney_button->Font = (gcnew System::Drawing::Font(L"游ゴシック", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->outputMoney_button->Location = System::Drawing::Point(108, 12);
			this->outputMoney_button->Name = L"outputMoney_button";
			this->outputMoney_button->Size = System::Drawing::Size(80, 40);
			this->outputMoney_button->TabIndex = 3;
			this->outputMoney_button->Text = L"支出";
			this->outputMoney_button->UseVisualStyleBackColor = true;
			this->outputMoney_button->Click += gcnew System::EventHandler(this, &mainForm::outputMoney_button_Click);
			// 
			// DateTime
			// 
			this->DateTime->HeaderText = L"DateTime";
			this->DateTime->Name = L"DateTime";
			// 
			// Detail
			// 
			this->Detail->HeaderText = L"Detail";
			this->Detail->Name = L"Detail";
			// 
			// InputMoney
			// 
			this->InputMoney->HeaderText = L"InputMoney";
			this->InputMoney->Name = L"InputMoney";
			// 
			// OutputMoney
			// 
			this->OutputMoney->HeaderText = L"OutputMoney";
			this->OutputMoney->Name = L"OutputMoney";
			// 
			// MoneyPool
			// 
			this->MoneyPool->HeaderText = L"MoneyPool";
			this->MoneyPool->Name = L"MoneyPool";
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(563, 307);
			this->Controls->Add(this->outputMoney_button);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->InputMoney_button);
			this->Name = L"mainForm";
			this->Text = L"mainForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	public: int clickButtonNum = 0;

	public: System::Void InputMoney_button_Click(System::Object^ sender, System::EventArgs^ e);
	public: System::Void outputMoney_button_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
