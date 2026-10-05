#include "bench/fib.hpp"

// RE Benchmark TU 19103 of 20000 (depth=28, stamp="default")
namespace bench_tu_19103 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19103>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19103
