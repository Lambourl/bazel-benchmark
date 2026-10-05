#include "bench/fib.hpp"

// RE Benchmark TU 4470 of 20000 (depth=28, stamp="default")
namespace bench_tu_4470 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4470>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4470
