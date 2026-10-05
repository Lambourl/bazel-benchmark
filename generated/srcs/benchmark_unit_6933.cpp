#include "bench/fib.hpp"

// RE Benchmark TU 6933 of 20000 (depth=28, stamp="default")
namespace bench_tu_6933 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6933>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6933
