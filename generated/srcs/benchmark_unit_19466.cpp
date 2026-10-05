#include "bench/fib.hpp"

// RE Benchmark TU 19466 of 20000 (depth=28, stamp="default")
namespace bench_tu_19466 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19466>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19466
