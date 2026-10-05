#include "bench/fib.hpp"

// RE Benchmark TU 263 of 20000 (depth=28, stamp="default")
namespace bench_tu_263 {
constexpr unsigned long long result = ::bench::slow_fib<28, 263>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_263
