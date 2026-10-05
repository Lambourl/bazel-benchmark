#include "bench/fib.hpp"

// RE Benchmark TU 19181 of 20000 (depth=28, stamp="default")
namespace bench_tu_19181 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19181>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19181
