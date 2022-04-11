#include "pch.h"
#include "mainForm.h"
#include "InputMoneyInfoForm.h"

System::Void MoneyManager::mainForm::InputMoney_button_Click(System::Object^ sender, System::EventArgs^ e) {

	clickButtonNum = 1;

	InputMoneyInfoForm^ inMoneyInfo = gcnew InputMoneyInfoForm();
	inMoneyInfo->Show();

	//dataGridView1->Rows[0]->Cells[0]->Style->BackColor = System::Drawing::Color::Red;
	//dataGridView1->Rows[0]->DefaultCellStyle->BackColor = System::Drawing::Color::Red;
}

System::Void MoneyManager::mainForm::outputMoney_button_Click(System::Object^ sender, System::EventArgs^ e) {
	
	clickButtonNum = 2;

	InputMoneyInfoForm^ inMoneyInfo = gcnew InputMoneyInfoForm();
	inMoneyInfo->Show();
}


