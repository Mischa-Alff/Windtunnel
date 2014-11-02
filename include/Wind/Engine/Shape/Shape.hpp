#ifndef WIND_ENGINE_SHAPE_SHAPE_HPP
#define WIND_ENGINE_SHAPE_SHAPE_HPP

#include <Wind/Engine/AABB/AABB.hpp>

namespace wind
{
	class Shape
	{
	public:
		enum Type
		{
			None,
			Circle
		};

	protected:
		const Type m_type;

		Shape(Type type);

	public:
		const Type &type() const;

		inline virtual AABB get_AABB() = 0;
		inline virtual AABB get_AABB(const Vector2f &position) = 0;

		Shape();
	};

}

#include <Wind/Engine/Shape/CircleShape.hpp>

#endif
