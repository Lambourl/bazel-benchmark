#include "bench/fib.hpp"

// RE Benchmark TU 4711 of 20000 (depth=28, stamp="default")
namespace bench_tu_4711 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4711>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4711
