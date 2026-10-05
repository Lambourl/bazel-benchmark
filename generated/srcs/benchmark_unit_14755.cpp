#include "bench/fib.hpp"

// RE Benchmark TU 14755 of 20000 (depth=28, stamp="default")
namespace bench_tu_14755 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14755>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14755
