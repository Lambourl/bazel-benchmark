#include "bench/fib.hpp"

// RE Benchmark TU 19784 of 20000 (depth=28, stamp="default")
namespace bench_tu_19784 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19784>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19784
