#include "pch.h"
#include "mainForm.h"
#include "InputMoneyInfoForm.h"

System::Void MoneyManager::InputMoneyInfoForm::Ok_button_Click(System::Object^ sender, System::EventArgs^ e) {

	mainForm^ mainform = gcnew mainForm();

	DateTime^ dt = DateTime::Now;
	String^ dateTimeString = dt->ToString("yyyy/MM/dd");

	mainForm::MoneyData_Struct^ moneyDataStack = gcnew mainForm::MoneyData_Struct(dateTimeString, textBox1->Text, int::Parse(textBox2->Text));

	mainform->moneyDataStackup[0] = (moneyDataStack);

	MoneyDataAddToDataGridView(mainform->clickButtonNum);

	this->Close();
}

System::Void MoneyManager::InputMoneyInfoForm::MoneyDataAddToDataGridView(int clickButtonNum) {

	mainForm^ mainform = gcnew mainForm();

	mainform->dataGridView1->Rows->Add();
	mainform->dataGridView1->Rows[0]->Cells[0]->Value = mainform->moneyDataStackup[0]->Date;
	mainform->dataGridView1->Rows[0]->Cells[1]->Value = mainform->moneyDataStackup[0]->Detail;

	if (clickButtonNum == 1) {
		mainform->dataGridView1->Rows[0]->Cells[2]->Value = mainform->moneyDataStackup[0]->Money;
		mainform->dataGridView1->Rows[0]->Cells[4]->Value = moneyPool + mainform->moneyDataStackup[0]->Money;
	}
	else if (clickButtonNum == 2) {
		mainform->dataGridView1->Rows[0]->Cells[3]->Value = mainform->moneyDataStackup[0]->Money;
		mainform->dataGridView1->Rows[0]->Cells[4]->Value = moneyPool - mainform->moneyDataStackup[0]->Money;
	}
}