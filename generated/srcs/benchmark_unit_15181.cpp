#include "bench/fib.hpp"

// RE Benchmark TU 15181 of 20000 (depth=28, stamp="default")
namespace bench_tu_15181 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15181>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15181
