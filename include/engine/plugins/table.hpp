#ifndef TABLE_HPP
#define TABLE_HPP

#include "engine/plugins/plugin_base.hpp"

#include "engine/api/table_parameters.hpp"
#include "engine/routing_algorithms.hpp"

#include "util/json_container.hpp"
#include <cstdint>

namespace osrm
{
namespace engine
{
namespace plugins
{

class TablePlugin final : public BasePlugin
{
  public:
    explicit TablePlugin(const int64_t max_locations_distance_table);

    Status HandleRequest(const RoutingAlgorithmsInterface &algorithms,
                         const api::TableParameters &params,
                         osrm::engine::api::ResultT &result) const;

  private:
    const int64_t max_locations_distance_table;
};
} // namespace plugins
} // namespace engine
} // namespace osrm

#endif // TABLE_HPP
