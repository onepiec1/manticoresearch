//
// Copyright (c) 2021, Manticore Software LTD (http://manticoresearch.com)
// Copyright (c) 2001-2016, Andrew Aksyonoff
// Copyright (c) 2008-2016, Sphinx Technologies Inc
// All rights reserved
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License. You should have
// received a copy of the GPL license along with this program; if you
// did not, you can find it at http://www.gnu.org/
//

#pragma once

#include <functional>

namespace Binlog {

	/// Bin Log Operation
	enum Blop_e
	{
		COMMIT			= 1,
		UPDATE_ATTRS	= 2,
		ADD_INDEX		= 3,
		ADD_CACHE		= 4,
		RECONFIGURE		= 5,
		PQ_ADD			= 6,
		PQ_DELETE		= 7,

		TOTAL
	};

	using FnCheckTxn = std::function <bool()>;
}
