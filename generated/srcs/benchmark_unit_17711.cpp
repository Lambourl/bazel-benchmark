#include "bench/fib.hpp"

// RE Benchmark TU 17711 of 20000 (depth=28, stamp="default")
namespace bench_tu_17711 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17711>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17711
