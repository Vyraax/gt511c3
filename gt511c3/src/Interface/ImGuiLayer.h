#pragma once

#include "Layer.h"

#include "Events/ApplicationEvent.h"
#include "Events/KeyEvent.h"
#include "Events/MouseEvent.h"

class ImGuiLayer : public Layer
{
public:
	ImGuiLayer();
	~ImGuiLayer();

	virtual void OnAttach() override;
	virtual void OnDetach() override;
	virtual void OnImGuiRender() override;
	void Begin();
	void End();

private:
	float m_Time = 0.0f;
};
