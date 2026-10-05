#include "bench/fib.hpp"

// RE Benchmark TU 3711 of 20000 (depth=28, stamp="default")
namespace bench_tu_3711 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3711>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3711
