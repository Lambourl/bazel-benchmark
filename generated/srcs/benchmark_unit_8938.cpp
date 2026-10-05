#include "bench/fib.hpp"

// RE Benchmark TU 8938 of 20000 (depth=28, stamp="default")
namespace bench_tu_8938 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8938>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8938
