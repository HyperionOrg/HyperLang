/*
 * Copyright (c) 2020-2021, SkillerRaptor <skillerraptor@protonmail.com>
 *
 * SPDX-License-Identifier: MIT
 */

#include "Hyper/Ast/Literals/NumericLiteral.hpp"

#include "Hyper/Generator.hpp"

#include <iostream>

namespace Hyper
{
	NumericLiteral::NumericLiteral(int64_t value)
		: m_value(value)
	{
	}

	void NumericLiteral::generate(Generator &generator) const
	{
		generator.generate_number(m_value);
	}

	void NumericLiteral::dump(size_t indent) const
	{
		AstNode::dump(indent);

		std::cout << "value = " << m_value;
		std::cout << '\n';
	}

	const char *NumericLiteral::class_name() const noexcept
	{
		return "NumericLiteral";
	}
} // namespace Hyper
