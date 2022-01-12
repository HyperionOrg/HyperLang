/*
 * Copyright (c) 2020-2021, SkillerRaptor <skillerraptor@protonmail.com>
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include "Hyper/Token.hpp"

#include <string>

namespace Hyper
{
	class Diagnostics;

	class Lexer
	{
	public:
		Lexer(Diagnostics &diagnostics, std::string text);

		Token next_token();

	private:
		void advance() noexcept;
		char peek() const noexcept;

		void skip_whitespace() noexcept;
		bool has_reached_end() const noexcept;

		Token scan_comment() noexcept;
		Token scan_block_comment() noexcept;

		std::string scan_string();
		std::string scan_integer_literal();
		std::string scan_identifier();

		Token::Type scan_keyword(std::string_view identifier) const noexcept;

	private:
		Diagnostics &m_diagnostics;
		std::string m_text;

		char m_current_char = '\0';

		size_t m_index = 0;
		size_t m_line = 1;
		size_t m_column = 0;
	};
} // namespace Hyper
