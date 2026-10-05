#include "bench/fib.hpp"

// RE Benchmark TU 291 of 20000 (depth=28, stamp="default")
namespace bench_tu_291 {
constexpr unsigned long long result = ::bench::slow_fib<28, 291>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_291
