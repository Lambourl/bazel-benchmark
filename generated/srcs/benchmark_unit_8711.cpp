#include "bench/fib.hpp"

// RE Benchmark TU 8711 of 20000 (depth=28, stamp="default")
namespace bench_tu_8711 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8711>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8711
