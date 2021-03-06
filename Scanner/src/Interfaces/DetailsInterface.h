#pragma once

#include "Interface/Interface.h"
#include "Interface/Texture.h"
#include "Controllers/UsersController.h"

class DetailsInterface : public Interface
{
public:
	DetailsInterface();
	virtual void render() override;

	static void on_user_selected(int id);
	static User* current_user;
	static Texture* current_image;

	static std::shared_ptr<UsersController> users;
};

