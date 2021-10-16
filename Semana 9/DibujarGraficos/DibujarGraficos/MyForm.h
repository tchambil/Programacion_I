#pragma once
#include "Tipos.h";
#include "CRectangulo.h";
#include "CGRectangulo.h";
namespace DibujarGraficos {

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
	private:
		CRectangulo* objRectangulo = new CRectangulo();
	private: System::Windows::Forms::GroupBox^ gpbPosicionInicial;
	private: System::Windows::Forms::TextBox^ txtPosicionY;

	private: System::Windows::Forms::TextBox^ txtPosicionX;

	private: System::Windows::Forms::Label^ lblpositionY;

	private: System::Windows::Forms::Label^ lblpositionX;
	private: System::Windows::Forms::PictureBox^ pcbGrafico;
	private: System::Windows::Forms::NumericUpDown^ nupRectanguloLado1;
	private: System::Windows::Forms::NumericUpDown^ nupRectanguloLado2;





		   CGRectangulo* obj2 = new CGRectangulo();

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
	private: System::Windows::Forms::GroupBox^ gbpGrupo1;
	protected:
	private: System::Windows::Forms::Button^ btnDibujar;
	private: System::Windows::Forms::ComboBox^ cbFiguras;
	private: System::Windows::Forms::Label^ lblElegir;
	private: System::Windows::Forms::GroupBox^ gpbRectangulo;
	private: System::Windows::Forms::Label^ lblRectanguloResultadoArea;
	private: System::Windows::Forms::Label^ lblRectanguloArea;


	private: System::Windows::Forms::Label^ lblRectanguloLado2;
	private: System::Windows::Forms::Label^ lblRectanguloLado1;
	private: System::Windows::Forms::GroupBox^ gpbElipse;
	private: System::Windows::Forms::TextBox^ txtElipseRadio;
	private: System::Windows::Forms::Label^ lblElipseArea;
	private: System::Windows::Forms::Label^ lblElipseRadio;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->gbpGrupo1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnDibujar = (gcnew System::Windows::Forms::Button());
			this->cbFiguras = (gcnew System::Windows::Forms::ComboBox());
			this->lblElegir = (gcnew System::Windows::Forms::Label());
			this->gpbRectangulo = (gcnew System::Windows::Forms::GroupBox());
			this->lblRectanguloResultadoArea = (gcnew System::Windows::Forms::Label());
			this->lblRectanguloArea = (gcnew System::Windows::Forms::Label());
			this->lblRectanguloLado2 = (gcnew System::Windows::Forms::Label());
			this->lblRectanguloLado1 = (gcnew System::Windows::Forms::Label());
			this->gpbElipse = (gcnew System::Windows::Forms::GroupBox());
			this->txtElipseRadio = (gcnew System::Windows::Forms::TextBox());
			this->lblElipseArea = (gcnew System::Windows::Forms::Label());
			this->lblElipseRadio = (gcnew System::Windows::Forms::Label());
			this->gpbPosicionInicial = (gcnew System::Windows::Forms::GroupBox());
			this->txtPosicionY = (gcnew System::Windows::Forms::TextBox());
			this->txtPosicionX = (gcnew System::Windows::Forms::TextBox());
			this->lblpositionY = (gcnew System::Windows::Forms::Label());
			this->lblpositionX = (gcnew System::Windows::Forms::Label());
			this->pcbGrafico = (gcnew System::Windows::Forms::PictureBox());
			this->nupRectanguloLado1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->nupRectanguloLado2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->gbpGrupo1->SuspendLayout();
			this->gpbRectangulo->SuspendLayout();
			this->gpbElipse->SuspendLayout();
			this->gpbPosicionInicial->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbGrafico))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nupRectanguloLado1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nupRectanguloLado2))->BeginInit();
			this->SuspendLayout();
			// 
			// gbpGrupo1
			// 
			this->gbpGrupo1->Controls->Add(this->btnDibujar);
			this->gbpGrupo1->Controls->Add(this->cbFiguras);
			this->gbpGrupo1->Controls->Add(this->lblElegir);
			this->gbpGrupo1->Location = System::Drawing::Point(27, 12);
			this->gbpGrupo1->Name = L"gbpGrupo1";
			this->gbpGrupo1->Size = System::Drawing::Size(759, 100);
			this->gbpGrupo1->TabIndex = 0;
			this->gbpGrupo1->TabStop = false;
			// 
			// btnDibujar
			// 
			this->btnDibujar->Location = System::Drawing::Point(381, 34);
			this->btnDibujar->Name = L"btnDibujar";
			this->btnDibujar->Size = System::Drawing::Size(286, 23);
			this->btnDibujar->TabIndex = 2;
			this->btnDibujar->Text = L"Dibujar";
			this->btnDibujar->UseVisualStyleBackColor = true;
			this->btnDibujar->Click += gcnew System::EventHandler(this, &MyForm::btnDibujar_Click);
			// 
			// cbFiguras
			// 
			this->cbFiguras->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbFiguras->FormattingEnabled = true;
			this->cbFiguras->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->cbFiguras->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Linea", L"Elipse", L"Rectangulo" });
			this->cbFiguras->Location = System::Drawing::Point(75, 37);
			this->cbFiguras->Name = L"cbFiguras";
			this->cbFiguras->Size = System::Drawing::Size(121, 21);
			this->cbFiguras->TabIndex = 1;
			this->cbFiguras->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cbFiguras_SelectedIndexChanged);
			// 
			// lblElegir
			// 
			this->lblElegir->AutoSize = true;
			this->lblElegir->Location = System::Drawing::Point(6, 37);
			this->lblElegir->Name = L"lblElegir";
			this->lblElegir->Size = System::Drawing::Size(62, 13);
			this->lblElegir->TabIndex = 0;
			this->lblElegir->Text = L"Elegir figura";
			// 
			// gpbRectangulo
			// 
			this->gpbRectangulo->Controls->Add(this->nupRectanguloLado2);
			this->gpbRectangulo->Controls->Add(this->lblRectanguloResultadoArea);
			this->gpbRectangulo->Controls->Add(this->nupRectanguloLado1);
			this->gpbRectangulo->Controls->Add(this->lblRectanguloArea);
			this->gpbRectangulo->Controls->Add(this->lblRectanguloLado2);
			this->gpbRectangulo->Controls->Add(this->lblRectanguloLado1);
			this->gpbRectangulo->Location = System::Drawing::Point(510, 164);
			this->gpbRectangulo->Name = L"gpbRectangulo";
			this->gpbRectangulo->Size = System::Drawing::Size(276, 156);
			this->gpbRectangulo->TabIndex = 1;
			this->gpbRectangulo->TabStop = false;
			this->gpbRectangulo->Text = L"Rectangulo";
			// 
			// lblRectanguloResultadoArea
			// 
			this->lblRectanguloResultadoArea->AutoSize = true;
			this->lblRectanguloResultadoArea->Location = System::Drawing::Point(87, 124);
			this->lblRectanguloResultadoArea->Name = L"lblRectanguloResultadoArea";
			this->lblRectanguloResultadoArea->Size = System::Drawing::Size(65, 13);
			this->lblRectanguloResultadoArea->TabIndex = 5;
			this->lblRectanguloResultadoArea->Text = L"lblResultado";
			// 
			// lblRectanguloArea
			// 
			this->lblRectanguloArea->AutoSize = true;
			this->lblRectanguloArea->Location = System::Drawing::Point(21, 124);
			this->lblRectanguloArea->Name = L"lblRectanguloArea";
			this->lblRectanguloArea->Size = System::Drawing::Size(29, 13);
			this->lblRectanguloArea->TabIndex = 4;
			this->lblRectanguloArea->Text = L"Area";
			// 
			// lblRectanguloLado2
			// 
			this->lblRectanguloLado2->AutoSize = true;
			this->lblRectanguloLado2->Location = System::Drawing::Point(21, 78);
			this->lblRectanguloLado2->Name = L"lblRectanguloLado2";
			this->lblRectanguloLado2->Size = System::Drawing::Size(40, 13);
			this->lblRectanguloLado2->TabIndex = 1;
			this->lblRectanguloLado2->Text = L"Lado 2";
			// 
			// lblRectanguloLado1
			// 
			this->lblRectanguloLado1->AutoSize = true;
			this->lblRectanguloLado1->Location = System::Drawing::Point(18, 45);
			this->lblRectanguloLado1->Name = L"lblRectanguloLado1";
			this->lblRectanguloLado1->Size = System::Drawing::Size(40, 13);
			this->lblRectanguloLado1->TabIndex = 0;
			this->lblRectanguloLado1->Text = L"Lado 1";
			// 
			// gpbElipse
			// 
			this->gpbElipse->Controls->Add(this->txtElipseRadio);
			this->gpbElipse->Controls->Add(this->lblElipseArea);
			this->gpbElipse->Controls->Add(this->lblElipseRadio);
			this->gpbElipse->Location = System::Drawing::Point(264, 164);
			this->gpbElipse->Name = L"gpbElipse";
			this->gpbElipse->Size = System::Drawing::Size(228, 156);
			this->gpbElipse->TabIndex = 2;
			this->gpbElipse->TabStop = false;
			this->gpbElipse->Text = L"Elipse";
			// 
			// txtElipseRadio
			// 
			this->txtElipseRadio->Location = System::Drawing::Point(65, 45);
			this->txtElipseRadio->Name = L"txtElipseRadio";
			this->txtElipseRadio->Size = System::Drawing::Size(100, 20);
			this->txtElipseRadio->TabIndex = 2;
			// 
			// lblElipseArea
			// 
			this->lblElipseArea->AutoSize = true;
			this->lblElipseArea->Location = System::Drawing::Point(10, 124);
			this->lblElipseArea->Name = L"lblElipseArea";
			this->lblElipseArea->Size = System::Drawing::Size(29, 13);
			this->lblElipseArea->TabIndex = 1;
			this->lblElipseArea->Text = L"Area";
			// 
			// lblElipseRadio
			// 
			this->lblElipseRadio->AutoSize = true;
			this->lblElipseRadio->Location = System::Drawing::Point(6, 49);
			this->lblElipseRadio->Name = L"lblElipseRadio";
			this->lblElipseRadio->Size = System::Drawing::Size(35, 13);
			this->lblElipseRadio->TabIndex = 0;
			this->lblElipseRadio->Text = L"Radio";
			// 
			// gpbPosicionInicial
			// 
			this->gpbPosicionInicial->Controls->Add(this->txtPosicionY);
			this->gpbPosicionInicial->Controls->Add(this->txtPosicionX);
			this->gpbPosicionInicial->Controls->Add(this->lblpositionY);
			this->gpbPosicionInicial->Controls->Add(this->lblpositionX);
			this->gpbPosicionInicial->Location = System::Drawing::Point(36, 164);
			this->gpbPosicionInicial->Name = L"gpbPosicionInicial";
			this->gpbPosicionInicial->Size = System::Drawing::Size(187, 156);
			this->gpbPosicionInicial->TabIndex = 3;
			this->gpbPosicionInicial->TabStop = false;
			this->gpbPosicionInicial->Text = L"Posición Inicial";
			// 
			// txtPosicionY
			// 
			this->txtPosicionY->Location = System::Drawing::Point(52, 94);
			this->txtPosicionY->Name = L"txtPosicionY";
			this->txtPosicionY->Size = System::Drawing::Size(100, 20);
			this->txtPosicionY->TabIndex = 3;
			// 
			// txtPosicionX
			// 
			this->txtPosicionX->Location = System::Drawing::Point(52, 41);
			this->txtPosicionX->Name = L"txtPosicionX";
			this->txtPosicionX->Size = System::Drawing::Size(100, 20);
			this->txtPosicionX->TabIndex = 2;
			// 
			// lblpositionY
			// 
			this->lblpositionY->AutoSize = true;
			this->lblpositionY->Location = System::Drawing::Point(18, 97);
			this->lblpositionY->Name = L"lblpositionY";
			this->lblpositionY->Size = System::Drawing::Size(14, 13);
			this->lblpositionY->TabIndex = 1;
			this->lblpositionY->Text = L"Y";
			// 
			// lblpositionX
			// 
			this->lblpositionX->AutoSize = true;
			this->lblpositionX->Location = System::Drawing::Point(18, 44);
			this->lblpositionX->Name = L"lblpositionX";
			this->lblpositionX->Size = System::Drawing::Size(14, 13);
			this->lblpositionX->TabIndex = 0;
			this->lblpositionX->Text = L"X";
			// 
			// pcbGrafico
			// 
			this->pcbGrafico->Location = System::Drawing::Point(510, 326);
			this->pcbGrafico->Name = L"pcbGrafico";
			this->pcbGrafico->Size = System::Drawing::Size(169, 123);
			this->pcbGrafico->TabIndex = 4;
			this->pcbGrafico->TabStop = false;
			// 
			// nupRectanguloLado1
			// 
			this->nupRectanguloLado1->Location = System::Drawing::Point(78, 43);
			this->nupRectanguloLado1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			this->nupRectanguloLado1->Name = L"nupRectanguloLado1";
			this->nupRectanguloLado1->Size = System::Drawing::Size(120, 20);
			this->nupRectanguloLado1->TabIndex = 5;
			// 
			// nupRectanguloLado2
			// 
			this->nupRectanguloLado2->Location = System::Drawing::Point(78, 76);
			this->nupRectanguloLado2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			this->nupRectanguloLado2->Name = L"nupRectanguloLado2";
			this->nupRectanguloLado2->Size = System::Drawing::Size(120, 20);
			this->nupRectanguloLado2->TabIndex = 6;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(817, 559);
			this->Controls->Add(this->pcbGrafico);
			this->Controls->Add(this->gpbPosicionInicial);
			this->Controls->Add(this->gpbElipse);
			this->Controls->Add(this->gpbRectangulo);
			this->Controls->Add(this->gbpGrupo1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->gbpGrupo1->ResumeLayout(false);
			this->gbpGrupo1->PerformLayout();
			this->gpbRectangulo->ResumeLayout(false);
			this->gpbRectangulo->PerformLayout();
			this->gpbElipse->ResumeLayout(false);
			this->gpbElipse->PerformLayout();
			this->gpbPosicionInicial->ResumeLayout(false);
			this->gpbPosicionInicial->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbGrafico))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nupRectanguloLado1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nupRectanguloLado2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void cbFiguras_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ item = Convert::ToString(cbFiguras->SelectedItem);
		if (item == "Rectangulo")
		{
		 
			gpbElipse->Enabled = false;
			gpbRectangulo->Enabled = true;
		}
		if (item == "Elipse")
		{
			this->txtElipseRadio->Text = "";
			gpbRectangulo->Enabled = false;
			gpbElipse->Enabled = true;
		}
	}
	private: System::Void btnDibujar_Click(System::Object^ sender, System::EventArgs^ e) {
		if(cbFiguras->SelectedItem == nullptr)
		{
			MessageBox::Show("Elegir un figura");
		}
		if (cbFiguras->SelectedItem == "Rectangulo")
		{
			TipoEntero lado1 = Convert::ToInt32(nupRectanguloLado1->Value);
			TipoEntero lado2 = Convert::ToInt32(nupRectanguloLado2->Value);
			//TipoEntero lado1 = Convert::ToInt32(txtRectanguloLado1->Text);
			//TipoEntero lado2 = Convert::ToInt32(txtRectanguloLado2->Text);
			TipoEntero PosX = Convert::ToInt32(txtPosicionX->Text);
			TipoEntero PosY = Convert::ToInt32(txtPosicionY->Text);

			objRectangulo->setAlto(lado1);
			objRectangulo->setAncho(lado2);
			objRectangulo->setInicioX(PosX);
			objRectangulo->setInicioY(PosY);
			obj2->agregaRectangulo(objRectangulo);
			lblRectanguloResultadoArea->Text = Convert::ToString(objRectangulo->hallaArea());

			Graphics^ miRectagulo = pcbGrafico->CreateGraphics();
			miRectagulo->Clear(Color::AntiqueWhite);
			miRectagulo->DrawRectangle(Pens::Red, PosX, PosY, lado1, lado2);

			//sin Pickurebox
			//Graphics^ canva = this->CreateGraphics();
			//canva->DrawRectangle(Pens::Red, PosX, PosY, lado1, lado2);

		}
		 
	}
	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
