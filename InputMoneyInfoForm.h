#pragma once

namespace MoneyManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// InputMoneyInfoForm の概要
	/// </summary>
	public ref class InputMoneyInfoForm : public System::Windows::Forms::Form
	{
	public:

		InputMoneyInfoForm(void)
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
		~InputMoneyInfoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ Ok_button;


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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Ok_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"游ゴシック", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->textBox1->Location = System::Drawing::Point(12, 42);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(120, 33);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"游ゴシック", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->textBox2->Location = System::Drawing::Point(151, 42);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(120, 33);
			this->textBox2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"游ゴシック", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 21);
			this->label1->TabIndex = 2;
			this->label1->Text = L"明細";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"游ゴシック", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label2->Location = System::Drawing::Point(147, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 21);
			this->label2->TabIndex = 3;
			this->label2->Text = L"金額";
			// 
			// Ok_button
			// 
			this->Ok_button->Font = (gcnew System::Drawing::Font(L"游ゴシック", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->Ok_button->Location = System::Drawing::Point(191, 92);
			this->Ok_button->Name = L"Ok_button";
			this->Ok_button->Size = System::Drawing::Size(80, 40);
			this->Ok_button->TabIndex = 4;
			this->Ok_button->Text = L"OK";
			this->Ok_button->UseVisualStyleBackColor = true;
			this->Ok_button->Click += gcnew System::EventHandler(this, &InputMoneyInfoForm::Ok_button_Click);
			// 
			// InputMoneyInfoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(285, 144);
			this->Controls->Add(this->Ok_button);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"InputMoneyInfoForm";
			this->Text = L"InputMoneyInfoForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: int moneyPool = 10000;

	private: System::Void Ok_button_Click(System::Object^ sender, System::EventArgs^ e);
	public: System::Void MoneyDataAddToDataGridView(int clickButtonNum);
};
}
