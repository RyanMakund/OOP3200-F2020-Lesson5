#pragma once
#ifndef _GAME_OBJECT_
#define _GAME_OBJECT_
#include "Vector2D.h"

class GameObject
{
public:
	// Constructors
	GameObject();
	GameObject(int id, float x, float y);
	GameObject(int id, const Vector2D& position);

	// Rule Of Three
	~GameObject(); // Destructor
	GameObject(const GameObject& other_object); // Copy Constructor
	GameObject& operator=(const GameObject& other_object); // Assignment Operator

	// Accessors
	Vector2D GetPosition() const;
	int GetID() const;

	// Mutators
	void SetPosition(float x, float y);
	void SetPosition(const Vector2D& new_position);
	void SetID(int id);

	// Utility Function
	std::string ToString() const;
	
private:
	int m_id;
	Vector2D m_position;
};

#endif /* defined (_GAME_OBJECT_) */

