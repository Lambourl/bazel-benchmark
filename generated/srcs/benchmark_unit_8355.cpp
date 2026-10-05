#include "bench/fib.hpp"

// RE Benchmark TU 8355 of 20000 (depth=28, stamp="default")
namespace bench_tu_8355 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8355>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8355
