#include "bench/fib.hpp"

// RE Benchmark TU 2708 of 20000 (depth=28, stamp="default")
namespace bench_tu_2708 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2708>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2708
