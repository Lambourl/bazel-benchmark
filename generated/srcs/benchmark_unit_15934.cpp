#include "bench/fib.hpp"

// RE Benchmark TU 15934 of 20000 (depth=28, stamp="default")
namespace bench_tu_15934 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15934>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15934
