#include "bench/fib.hpp"

// RE Benchmark TU 19314 of 20000 (depth=28, stamp="default")
namespace bench_tu_19314 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19314>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19314
