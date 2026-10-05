#include "bench/fib.hpp"

// RE Benchmark TU 2711 of 20000 (depth=28, stamp="default")
namespace bench_tu_2711 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2711>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2711
