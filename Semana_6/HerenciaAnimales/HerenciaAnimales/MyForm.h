#pragma once
#include "CPerro.h"

namespace HerenciaAnimales {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ lbAnimales;
	protected:
	private: System::Windows::Forms::Label^ lblAnimales;
	private: System::Windows::Forms::Label^ lblSonido;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ lblRegion;
	private: System::Windows::Forms::Label^ lblGenero;
	private: System::Windows::Forms::Label^ lblPeso;
	private: System::Windows::Forms::Label^ lblCanComida;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblNombre;

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
			this->lbAnimales = (gcnew System::Windows::Forms::ListBox());
			this->lblAnimales = (gcnew System::Windows::Forms::Label());
			this->lblSonido = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lblRegion = (gcnew System::Windows::Forms::Label());
			this->lblGenero = (gcnew System::Windows::Forms::Label());
			this->lblPeso = (gcnew System::Windows::Forms::Label());
			this->lblCanComida = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbAnimales
			// 
			this->lbAnimales->FormattingEnabled = true;
			this->lbAnimales->Location = System::Drawing::Point(533, 60);
			this->lbAnimales->Name = L"lbAnimales";
			this->lbAnimales->Size = System::Drawing::Size(120, 95);
			this->lbAnimales->TabIndex = 0;
			this->lbAnimales->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::lbAnimales_SelectedIndexChanged);
			// 
			// lblAnimales
			// 
			this->lblAnimales->AutoSize = true;
			this->lblAnimales->Location = System::Drawing::Point(533, 41);
			this->lblAnimales->Name = L"lblAnimales";
			this->lblAnimales->Size = System::Drawing::Size(49, 13);
			this->lblAnimales->TabIndex = 1;
			this->lblAnimales->Text = L"Animales";
			// 
			// lblSonido
			// 
			this->lblSonido->AutoSize = true;
			this->lblSonido->Location = System::Drawing::Point(143, 477);
			this->lblSonido->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblSonido->Name = L"lblSonido";
			this->lblSonido->Size = System::Drawing::Size(50, 13);
			this->lblSonido->TabIndex = 28;
			this->lblSonido->Text = L"lblSonido";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(37, 477);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 13);
			this->label6->TabIndex = 27;
			this->label6->Text = L"Sonido";
			// 
			// lblRegion
			// 
			this->lblRegion->AutoSize = true;
			this->lblRegion->Location = System::Drawing::Point(143, 443);
			this->lblRegion->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblRegion->Name = L"lblRegion";
			this->lblRegion->Size = System::Drawing::Size(51, 13);
			this->lblRegion->TabIndex = 26;
			this->lblRegion->Text = L"lblRegion";
			// 
			// lblGenero
			// 
			this->lblGenero->AutoSize = true;
			this->lblGenero->Location = System::Drawing::Point(143, 419);
			this->lblGenero->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblGenero->Name = L"lblGenero";
			this->lblGenero->Size = System::Drawing::Size(52, 13);
			this->lblGenero->TabIndex = 25;
			this->lblGenero->Text = L"lblGenero";
			// 
			// lblPeso
			// 
			this->lblPeso->AutoSize = true;
			this->lblPeso->Location = System::Drawing::Point(143, 391);
			this->lblPeso->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblPeso->Name = L"lblPeso";
			this->lblPeso->Size = System::Drawing::Size(41, 13);
			this->lblPeso->TabIndex = 24;
			this->lblPeso->Text = L"lblPeso";
			// 
			// lblCanComida
			// 
			this->lblCanComida->AutoSize = true;
			this->lblCanComida->Location = System::Drawing::Point(143, 359);
			this->lblCanComida->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblCanComida->Name = L"lblCanComida";
			this->lblCanComida->Size = System::Drawing::Size(74, 13);
			this->lblCanComida->TabIndex = 23;
			this->lblCanComida->Text = L"lblCantComida";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(37, 443);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 13);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Región ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(36, 419);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 13);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Género";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(36, 391);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Peso";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(36, 359);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 13);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Cantidad Comida";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(36, 331);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 13);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Nombre";
			// 
			// lblNombre
			// 
			this->lblNombre->AutoSize = true;
			this->lblNombre->Location = System::Drawing::Point(143, 331);
			this->lblNombre->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Size = System::Drawing::Size(54, 13);
			this->lblNombre->TabIndex = 17;
			this->lblNombre->Text = L"lblNombre";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(864, 516);
			this->Controls->Add(this->lblSonido);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->lblRegion);
			this->Controls->Add(this->lblGenero);
			this->Controls->Add(this->lblPeso);
			this->Controls->Add(this->lblCanComida);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblNombre);
			this->Controls->Add(this->lblAnimales);
			this->Controls->Add(this->lbAnimales);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

		shared_ptr<CPerro> pBoby = make_shared<CPerro>('M', "Peru", "Boby", 4, 0);
		TipoString nombre = pBoby->getNombre();
		String^ nombrestr = gcnew String(nombre.c_str());
		lbAnimales->Items->Add(nombrestr);
	}
	private: System::Void lbAnimales_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		shared_ptr<CPerro> pBoby = make_shared<CPerro>('M', "Peru", "Boby", 4, 0);

		if(lbAnimales->SelectedItems->Count>0)
		{
			if (lbAnimales->SelectedItems[0]->ToString() == "Boby")
			{
				auto nombre = pBoby->getNombre();
				auto cantComidad = pBoby->getCantAlimento();
				String^ cantComidas = cantComidad.ToString();
				auto region = pBoby->getRegionVive();
				auto sonido = pBoby->ProduceSonido();
				auto peso = pBoby->getPeso();
				String^ pesos = peso.ToString();
				lblNombre->Text = gcnew String(nombre.c_str());
				lblRegion->Text = gcnew String(region.c_str());
				lblCanComida->Text = cantComidas;
				lblPeso->Text = pesos;
				lblSonido->Text = gcnew String(sonido.c_str());


			}
		}

	}
};
}
