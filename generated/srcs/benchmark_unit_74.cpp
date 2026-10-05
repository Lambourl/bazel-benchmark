#include "bench/fib.hpp"

// RE Benchmark TU 74 of 20000 (depth=28, stamp="default")
namespace bench_tu_74 {
constexpr unsigned long long result = ::bench::slow_fib<28, 74>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_74
