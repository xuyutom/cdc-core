// Copyright (c) 2017-2018 The CDC developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.


#include <consensus/contract_engine/ContractEngineBuilder.hpp>

namespace cdcchain
{
	namespace consensus
	{
		namespace contract_engine
		{
			ContractEngineBuilder::~ContractEngineBuilder()
			{

			}

			ContractEngineBuilder* ContractEngineBuilder::set_use_contract(bool use_contract)
			{
				_engine = std::make_shared<ActiveContractEngine>(use_contract);
				return this;
			}
			ContractEngineBuilder* ContractEngineBuilder::set_caller(std::string caller, std::string caller_address)
			{
				if (!_engine)
				{
					_engine = std::make_shared<ActiveContractEngine>();
				}
				_engine->add_global_string_variable("caller", caller);
				_engine->add_global_string_variable("caller_address", caller_address);
				return this;
			}
			std::shared_ptr<ActiveContractEngine> ContractEngineBuilder::build()
			{
				if (!_engine)
				{
					_engine = std::make_shared<ActiveContractEngine>();
				}
				return _engine;
			}
		}
	}
}
