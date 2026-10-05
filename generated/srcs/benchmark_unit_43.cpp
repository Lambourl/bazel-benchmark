#include "bench/fib.hpp"

// RE Benchmark TU 43 of 20000 (depth=28, stamp="default")
namespace bench_tu_43 {
constexpr unsigned long long result = ::bench::slow_fib<28, 43>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_43
