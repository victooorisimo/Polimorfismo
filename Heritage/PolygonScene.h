#pragma once
#include "Decagon.h"
#include "Enegon.h"
#include "Heptagon.h"
#include "Hexagon.h"
#include "Octagon.h"
#include "Pentagon.h"
#include "Square.h"
#include "Triangle.h"

namespace Heritage {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de PolygonScene
	/// </summary>
	public ref class PolygonScene : public System::Windows::Forms::Form
	{
	public:
		PolygonScene(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~PolygonScene()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblTitle;
	private: System::Windows::Forms::ComboBox^ cmbPolygon;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ lblPolygon;
	private: System::Windows::Forms::TextBox^ txtLength;
	private: System::Windows::Forms::Label^ lblParameter;
	private: System::Windows::Forms::Label^ lblParameter2;

	private: System::Windows::Forms::TextBox^ txtLength2;
	private: System::Windows::Forms::Button^ btnCalculate;


	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ lblPerimeter;
	private: System::Windows::Forms::Label^ lblArea;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->cmbPolygon = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnCalculate = (gcnew System::Windows::Forms::Button());
			this->lblParameter2 = (gcnew System::Windows::Forms::Label());
			this->txtLength2 = (gcnew System::Windows::Forms::TextBox());
			this->lblParameter = (gcnew System::Windows::Forms::Label());
			this->txtLength = (gcnew System::Windows::Forms::TextBox());
			this->lblPolygon = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lblPerimeter = (gcnew System::Windows::Forms::Label());
			this->lblArea = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Corbel", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->ForeColor = System::Drawing::Color::Black;
			this->lblTitle->Location = System::Drawing::Point(105, 11);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(113, 29);
			this->lblTitle->TabIndex = 0;
			this->lblTitle->Text = L"Poligonos";
			// 
			// cmbPolygon
			// 
			this->cmbPolygon->FormattingEnabled = true;
			this->cmbPolygon->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Triángulo", L"Cuadrado", L"Pentágono", L"Hexágono",
					L"Heptágono", L"Octágono", L"Eneágono", L"Decágono"
			});
			this->cmbPolygon->Location = System::Drawing::Point(113, 54);
			this->cmbPolygon->Name = L"cmbPolygon";
			this->cmbPolygon->Size = System::Drawing::Size(110, 21);
			this->cmbPolygon->TabIndex = 1;
			this->cmbPolygon->SelectionChangeCommitted += gcnew System::EventHandler(this, &PolygonScene::comboBox1_SelectionChangeCommitted);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Corbel", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(56, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 15);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Poligono:";
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->btnCalculate);
			this->panel1->Controls->Add(this->lblParameter2);
			this->panel1->Controls->Add(this->txtLength2);
			this->panel1->Controls->Add(this->lblParameter);
			this->panel1->Controls->Add(this->txtLength);
			this->panel1->Location = System::Drawing::Point(15, 91);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(253, 112);
			this->panel1->TabIndex = 3;
			// 
			// btnCalculate
			// 
			this->btnCalculate->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCalculate->ForeColor = System::Drawing::Color::Black;
			this->btnCalculate->Location = System::Drawing::Point(89, 76);
			this->btnCalculate->Name = L"btnCalculate";
			this->btnCalculate->Size = System::Drawing::Size(75, 23);
			this->btnCalculate->TabIndex = 5;
			this->btnCalculate->Text = L"Calcular";
			this->btnCalculate->UseVisualStyleBackColor = true;
			this->btnCalculate->Click += gcnew System::EventHandler(this, &PolygonScene::btnCalculate_Click);
			// 
			// lblParameter2
			// 
			this->lblParameter2->AutoSize = true;
			this->lblParameter2->Font = (gcnew System::Drawing::Font(L"Corbel", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblParameter2->ForeColor = System::Drawing::Color::Black;
			this->lblParameter2->Location = System::Drawing::Point(8, 48);
			this->lblParameter2->Name = L"lblParameter2";
			this->lblParameter2->Size = System::Drawing::Size(78, 15);
			this->lblParameter2->TabIndex = 8;
			this->lblParameter2->Text = L"lblParamete2";
			// 
			// txtLength2
			// 
			this->txtLength2->Location = System::Drawing::Point(89, 46);
			this->txtLength2->Name = L"txtLength2";
			this->txtLength2->Size = System::Drawing::Size(139, 20);
			this->txtLength2->TabIndex = 7;
			// 
			// lblParameter
			// 
			this->lblParameter->AutoSize = true;
			this->lblParameter->Font = (gcnew System::Drawing::Font(L"Corbel", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblParameter->ForeColor = System::Drawing::Color::Black;
			this->lblParameter->Location = System::Drawing::Point(8, 22);
			this->lblParameter->Name = L"lblParameter";
			this->lblParameter->Size = System::Drawing::Size(75, 15);
			this->lblParameter->TabIndex = 6;
			this->lblParameter->Text = L"lblParameter";
			// 
			// txtLength
			// 
			this->txtLength->Location = System::Drawing::Point(89, 20);
			this->txtLength->Name = L"txtLength";
			this->txtLength->Size = System::Drawing::Size(139, 20);
			this->txtLength->TabIndex = 5;
			// 
			// lblPolygon
			// 
			this->lblPolygon->AutoSize = true;
			this->lblPolygon->Font = (gcnew System::Drawing::Font(L"Corbel", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPolygon->ForeColor = System::Drawing::Color::Black;
			this->lblPolygon->Location = System::Drawing::Point(24, 82);
			this->lblPolygon->Name = L"lblPolygon";
			this->lblPolygon->Size = System::Drawing::Size(88, 15);
			this->lblPolygon->TabIndex = 4;
			this->lblPolygon->Text = L"Caracteristicas:";
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->lblPerimeter);
			this->panel2->Controls->Add(this->lblArea);
			this->panel2->Location = System::Drawing::Point(18, 229);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(250, 68);
			this->panel2->TabIndex = 5;
			// 
			// lblPerimeter
			// 
			this->lblPerimeter->AutoSize = true;
			this->lblPerimeter->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPerimeter->ForeColor = System::Drawing::Color::Black;
			this->lblPerimeter->Location = System::Drawing::Point(27, 40);
			this->lblPerimeter->Name = L"lblPerimeter";
			this->lblPerimeter->Size = System::Drawing::Size(56, 16);
			this->lblPerimeter->TabIndex = 10;
			this->lblPerimeter->Text = L"Perimeter:";
			// 
			// lblArea
			// 
			this->lblArea->AutoSize = true;
			this->lblArea->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblArea->ForeColor = System::Drawing::Color::Black;
			this->lblArea->Location = System::Drawing::Point(27, 14);
			this->lblArea->Name = L"lblArea";
			this->lblArea->Size = System::Drawing::Size(34, 16);
			this->lblArea->TabIndex = 9;
			this->lblArea->Text = L"Area:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Corbel", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(24, 220);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 15);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Resultado";
			// 
			// PolygonScene
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(284, 311);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->lblPolygon);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cmbPolygon);
			this->Controls->Add(this->lblTitle);
			this->ForeColor = System::Drawing::Color::Crimson;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"PolygonScene";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Polygon ";
			this->Load += gcnew System::EventHandler(this, &PolygonScene::PolygonScene_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Decagon* decagon;
		Enegon* enegon;
		Heptagon* heptagon;
		Hexagon* hexagon;
		Octagon* octagon;
		Pentagon* pentagon;
		Square* square;
		Triangle* triangle;
		String^ textoArea = "Area: ";
		String^ textoPerimetro = "Perimetro: ";


	private: System::Void PolygonScene_Load(System::Object^ sender, System::EventArgs^ e) {
		lblParameter->Visible = false;
		lblParameter2->Visible = false;
		txtLength->Visible = false;
		txtLength2->Visible = false;
		btnCalculate->Visible = false;
	}

	private: System::Void comboBox1_SelectionChangeCommitted(System::Object^ sender, System::EventArgs^ e) {
		lblParameter->Visible = true;
		txtLength->Visible = true;
		btnCalculate->Visible = true;
		txtLength->Text = "";
		txtLength2->Text = "";
		lblArea->Text = "";
		lblPerimeter->Text = "";

		if (cmbPolygon->SelectedItem == "Triángulo") {
			lblParameter->Text = "Base:";
			lblParameter2->Text = "Altura:";
			lblParameter2->Visible = true;
			txtLength2->Visible = true;
		}else if(cmbPolygon->SelectedItem == "Cuadrado"){
			lblParameter->Text = "Lado:";
			lblParameter2->Visible = false;
			txtLength2->Visible = false;
		}else {
			lblParameter->Text = "Long. Lados:";
			lblParameter2->Text = "Apotema:";
			lblParameter2->Visible = true;
			txtLength2->Visible = true;
		}
	}

	private: System::Void btnCalculate_Click(System::Object^ sender, System::EventArgs^ e) {
		if (cmbPolygon->SelectedItem == "Triángulo") {
			triangle = new Triangle();
			triangle->setHeight(Convert::ToInt16(txtLength2->Text));
			triangle->setLeng(Convert::ToInt16(txtLength->Text));
			lblArea->Text = textoArea + Convert::ToString(triangle->getArea());
			lblPerimeter->Text = textoPerimetro + Convert::ToString(triangle->getPerimeter());
		}else if (cmbPolygon->SelectedItem == "Cuadrado") {
			square = new Square();
			square->setSide(Convert::ToInt16(txtLength->Text));
			lblArea->Text = textoArea + Convert::ToString(square->getArea());
			lblPerimeter->Text = textoPerimetro + Convert::ToString(square->getPerimeter());
		}else if (cmbPolygon->SelectedItem == "Pentágono") {
			pentagon = new Pentagon();
			pentagon->setSite(Convert::ToInt16(txtLength->Text));
			pentagon->setApotema(Convert::ToInt16(txtLength2->Text));
			lblArea->Text = textoArea + Convert::ToString(pentagon->getArea());
			lblPerimeter->Text = textoPerimetro + Convert::ToString(pentagon->getPerimeter());
		}else if (cmbPolygon->SelectedItem == "Hexágono") {
			hexagon = new Hexagon();
			hexagon->setSite(Convert::ToInt16(txtLength->Text));
			hexagon->setApotema(Convert::ToInt16(txtLength2->Text));
			lblArea->Text = textoArea + Convert::ToString(hexagon->getArea());
			lblPerimeter->Text = textoPerimetro + Convert::ToString(hexagon->getPerimeter());
		}else if (cmbPolygon->SelectedItem == "Heptágono") {
			heptagon = new Heptagon();
			heptagon->setSite(Convert::ToInt16(txtLength->Text));
			heptagon->setApotema(Convert::ToInt16(txtLength2->Text));
			lblArea->Text = textoArea + Convert::ToString(heptagon->getArea());
			lblPerimeter->Text = textoPerimetro + Convert::ToString(heptagon->getPerimeter());
		}else if (cmbPolygon->SelectedItem == "Octágono") {
			octagon = new Octagon();
			octagon->setSite(Convert::ToInt16(txtLength->Text));
			octagon->setApotema(Convert::ToInt16(txtLength2->Text));
			lblArea->Text = textoArea + Convert::ToString(octagon->getArea());
			lblPerimeter->Text = textoPerimetro + Convert::ToString(octagon->getPerimeter());
		}else if (cmbPolygon->SelectedItem == "Eneágono") {
			enegon = new Enegon();
			enegon->setSite(Convert::ToInt16(txtLength->Text));
			enegon->setApotema(Convert::ToInt16(txtLength2->Text));
			lblArea->Text = textoArea + Convert::ToString(enegon->getArea());
			lblPerimeter->Text = textoPerimetro + Convert::ToString(enegon->getPerimeter());
		}else if (cmbPolygon->SelectedItem == "Decágono") {
			decagon = new Decagon();
			decagon->setSite(Convert::ToInt16(txtLength->Text));
			decagon->setApotema(Convert::ToInt16(txtLength2->Text));
			lblArea->Text = textoArea + Convert::ToString(decagon->getArea());
			lblPerimeter->Text = textoPerimetro + Convert::ToString(decagon->getPerimeter());
		}
	}
};
}
