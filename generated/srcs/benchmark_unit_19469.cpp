#include "bench/fib.hpp"

// RE Benchmark TU 19469 of 20000 (depth=28, stamp="default")
namespace bench_tu_19469 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19469>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19469
