#include "bench/fib.hpp"

// RE Benchmark TU 19967 of 20000 (depth=28, stamp="default")
namespace bench_tu_19967 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19967>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19967
