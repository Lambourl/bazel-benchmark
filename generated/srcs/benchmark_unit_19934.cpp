#include "bench/fib.hpp"

// RE Benchmark TU 19934 of 20000 (depth=28, stamp="default")
namespace bench_tu_19934 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19934>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19934
