#include "bench/fib.hpp"

// RE Benchmark TU 7977 of 20000 (depth=28, stamp="default")
namespace bench_tu_7977 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7977>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7977
