#include "bench/fib.hpp"

// RE Benchmark TU 12665 of 20000 (depth=28, stamp="default")
namespace bench_tu_12665 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12665>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12665
