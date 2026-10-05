#include "bench/fib.hpp"

// RE Benchmark TU 8841 of 20000 (depth=28, stamp="default")
namespace bench_tu_8841 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8841>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8841
