#include "bench/fib.hpp"

// RE Benchmark TU 16002 of 20000 (depth=28, stamp="default")
namespace bench_tu_16002 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16002>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16002
