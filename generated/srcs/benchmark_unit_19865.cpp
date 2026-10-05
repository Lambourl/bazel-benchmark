#include "bench/fib.hpp"

// RE Benchmark TU 19865 of 20000 (depth=28, stamp="default")
namespace bench_tu_19865 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19865>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19865
