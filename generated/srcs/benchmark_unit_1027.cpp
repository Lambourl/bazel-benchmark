#include "bench/fib.hpp"

// RE Benchmark TU 1027 of 20000 (depth=28, stamp="default")
namespace bench_tu_1027 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1027>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1027
