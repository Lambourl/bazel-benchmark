#include "bench/fib.hpp"

// RE Benchmark TU 8522 of 20000 (depth=28, stamp="default")
namespace bench_tu_8522 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8522>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8522
