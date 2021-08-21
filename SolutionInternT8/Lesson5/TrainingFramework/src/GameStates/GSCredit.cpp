#include "GSCredit.h"
#include "Camera.h"

GSCredit::GSCredit() : GameStateBase(StateType::STATE_CREDIT),
m_background(nullptr), m_listButton(std::list<std::shared_ptr<GameButton>>{}), m_textGameName(nullptr), m_textGameName1(nullptr),m_textGameName2(nullptr)
{
}


GSCredit::~GSCredit()
{
}



void GSCredit::Init()
{
	auto model = ResourceManagers::GetInstance()->GetModel("Sprite2D.nfg");
	auto texture = ResourceManagers::GetInstance()->GetTexture("bg_play2.tga");

	// background
	auto shader = ResourceManagers::GetInstance()->GetShader("TextureShader");
	m_background = std::make_shared<Sprite2D>(model, shader, texture);
	m_background->Set2DPosition(Globals::screenWidth / 2, Globals::screenHeight / 2);
	m_background->SetSize(Globals::screenWidth, Globals::screenHeight);
	
	//back button
	texture = ResourceManagers::GetInstance()->GetTexture("btn_prev.tga");
	std::shared_ptr<GameButton> button = std::make_shared<GameButton>(model, shader, texture);
	button->Set2DPosition(Globals::screenWidth - 50, 50);
	button->SetSize(50, 50);
	button->SetOnClick([]() {
		GameStateMachine::GetInstance()->ChangeState(StateType::STATE_MENU);
		});
	m_listButton.push_back(button);


	// credit
	shader = ResourceManagers::GetInstance()->GetShader("TextShader");
	std::shared_ptr<Font> font = ResourceManagers::GetInstance()->GetFont("arialbd.ttf");
	m_textGameName = std::make_shared< Text>(shader, font, "NAME: HA QUANG DUC", Vector4(1.0f, 1.5f, 0.0f, 1.0f), 1.5f);
	m_textGameName1 = std::make_shared< Text>(shader, font, "AGE : 21", Vector4(1.0f, 1.5f, 0.0f, 1.0f), 1.5f);
	m_textGameName2 = std::make_shared< Text>(shader, font, "GENDER: MALE", Vector4(1.0f, 1.5f, 0.0f, 1.0f), 1.5f);
	m_textGameName->Set2DPosition(Vector2(30,300));
	m_textGameName1->Set2DPosition(Vector2(30,400));
	m_textGameName2->Set2DPosition(Vector2(30, 500));
}

void GSCredit::Exit()
{
}


void GSCredit::Pause()
{
}

void GSCredit::Resume()
{
}


void GSCredit::HandleEvents()
{
}

void GSCredit::HandleKeyEvents(int key, bool bIsPressed)
{
}

void GSCredit::HandleTouchEvents(int x, int y, bool bIsPressed)
{
	for (auto button : m_listButton)
	{
		if (button->HandleTouchEvents(x, y, bIsPressed))
		{
			break;
		}
	}
}

void GSCredit::HandleMouseMoveEvents(int x, int y)
{
}

void GSCredit::Update(float deltaTime)
{
	m_background->Update(deltaTime);
	for (auto it : m_listButton)
	{
		it->Update(deltaTime);
	}
}

void GSCredit::Draw()
{
	m_background->Draw();
	for (auto it : m_listButton)
	{
		it->Draw();
	}
	m_textGameName->Draw();
	m_textGameName1->Draw();
	m_textGameName2->Draw();
	
}
