#include "bench/fib.hpp"

// RE Benchmark TU 4009 of 20000 (depth=28, stamp="default")
namespace bench_tu_4009 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4009>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4009
